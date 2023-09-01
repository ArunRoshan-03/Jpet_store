TC_09_select_pets_until_2_or_8_item_id()
{
lr_start_transaction("TC_09_select_pets_until_2_or_8_item_id");

	web_add_auto_header("Accept-Language", 
		"en-US,en;q=0.5");
	
	web_reg_save_param_regexp(
		"ParamName=C_product_id",
		"RegExp=viewProduct=&amp;productId=(.*?)\">",
		"Group=1",
		"Ordinal=All",
		SEARCH_FILTERS,
		"Scope=BODY",
		LAST);

	web_url("Catalog.action_5", 
		"URL={scheme}//{base_url}/Catalog.action?viewCategory=&categoryId={P_total_animals_names}", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer={scheme}//{base_url}/Cart.action", 
		"Snapshot=t10.inf", 
		"Mode=HTML", 
		LAST);

		total_product_id = lr_paramarr_random("C_product_id");
		lr_param_sprintf("P_total_product_id","%s",total_product_id);
		
	web_reg_save_param_regexp(
		"ParamName=C_item_id",
		"RegExp=addItemToCart=&amp;workingItemId=(.*?)\" class=\"Button\">",
		"Group=1",
		"Ordinal=All",
		SEARCH_FILTERS,
		"Scope=BODY",
		LAST);
		
	web_link("{P_total_product_id}", 
		"Text={P_total_product_id}", 
		"Snapshot=t11.inf", 
		LAST);

		total_item_id=lr_paramarr_random("C_item_id");
		lr_param_sprintf("P_total_item_id","%s",total_item_id);
		
	web_link("{P_total_item_id}", 
		"Text={P_total_item_id}", 
		"Snapshot=t12.inf", 
		LAST);

	web_link("Add to Cart", 
		"Text=Add to Cart", 
		"Snapshot=t13.inf", 
		LAST);

	web_submit_form("Cart.action_3", 
		"Snapshot=t14.inf", 
		ITEMDATA, 
		"Name={P_item_id}", "Value={fill_quantity}", ENDITEM, 
		"Name={P_total_item_id}", "Value={P_fill_quantity_pets}", ENDITEM, 
		"Name=updateCartQuantities", "Value=Update Cart", ENDITEM, 
		LAST);

lr_end_transaction("TC_09_select_pets_until_2_or_8_item_id", LR_AUTO);
	lr_think_time(think_time);		
	return 0;
}
