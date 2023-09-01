TC_07_click_add_to_cart()
{
lr_start_transaction("TC_07_click_add_to_cart");

	web_add_header("Accept-Language", 
		"en-US,en;q=0.5");
	
	web_reg_save_param_regexp(
		"ParamName=C_quantity_sourcepage_id",
		"RegExp=hidden\" name=\"_sourcePage\" value=\"(.*?)\" />",
		"Ordinal=1",
		SEARCH_FILTERS,
		"Scope=BODY",
		LAST);

	web_reg_save_param_regexp(
		"ParamName=C_quantity_fp_id",
		"RegExp=name=\"__fp\" value=\"(.*?)\" />",
		SEARCH_FILTERS,
		LAST);

	web_url("Cart.action", 
		"URL={scheme}//{base_url}/Cart.action?addItemToCart=&workingItemId={P_item_id}", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer={scheme}//{base_url}/Catalog.action?viewItem=&itemId={P_item_id}", 
		"Snapshot=t8.inf", 
		"Mode=HTML", 
		LAST);

lr_end_transaction("TC_07_click_add_to_cart", LR_AUTO);
	lr_think_time(think_time);	
	return 0;
}
