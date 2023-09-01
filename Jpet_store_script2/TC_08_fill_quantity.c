TC_08_fill_quantity()
{
lr_start_transaction("TC_08_fill_quantity");

	web_submit_data("Cart.action_2", 
		"Action={scheme}//{base_url}/Cart.action", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer={scheme}//{base_url}/Cart.action?addItemToCart=&workingItemId={P_item_id}", 
		"Snapshot=t9.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name={P_item_id}", "Value={fill_quantity}", ENDITEM, 
		"Name=updateCartQuantities", "Value=Update Cart", ENDITEM, 
		"Name=_sourcePage", "Value={C_quantity_sourcepage_id}", ENDITEM, 
		"Name=__fp", "Value={C_quantity_fp_id}", ENDITEM, 
		LAST);
	
	total_animals_names=lr_paramarr_random("C_animals_names");
	lr_param_sprintf("P_total_animals_names","%s",total_animals_names);

lr_end_transaction("TC_08_fill_quantity", LR_AUTO);
	lr_think_time(think_time);	
	return 0;
}
