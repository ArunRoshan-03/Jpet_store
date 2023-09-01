TC_09_fill_quantity_and_click_update_cart()
{
	lr_start_transaction("TC_09_fill_quantity_and_click_update_cart");

	randomNumber = rand() % 8 + 2; 
	lr_param_sprintf("P_quantity_number", "%02d", randomNumber);
	web_submit_data("Cart.action_2", 
		"Action={scheme}://{base_url}/{path}/Cart.action", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer={scheme}://{base_url}/{path}/Cart.action?addItemToCart=&workingItemId={P_random_item_id}", 
		"Snapshot=t35.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name={P_random_item_id}", "Value={P_quantity_number}", ENDITEM, 
		"Name=updateCartQuantities", "Value=Update Cart", ENDITEM, 
		"Name=_sourcePage", "Value={C_update_check_sourcePage}", ENDITEM, 
		"Name=__fp", "Value={C_update_check_fp}", ENDITEM, 
		LAST);
	lr_think_time(think_time);
	lr_end_transaction("TC_09_fill_quantity_and_click_update_cart", LR_AUTO);
	return 0;
}