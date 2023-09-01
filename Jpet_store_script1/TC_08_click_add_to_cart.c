TC_08_click_add_to_cart()
{

	lr_start_transaction("TC_08_click_add_to_cart");
	web_reg_save_param_ex(
		"ParamName=C_update_check_sourcePage",
		"LB=name=\"_sourcePage\" value=\"",
		"RB=\"",
		"Ordinal=2",
		SEARCH_FILTERS,
		"Scope=Body",
		LAST);
		
	web_reg_save_param_ex(
		"ParamName=C_update_check_fp",
		"LB=name=\"__fp\" value=\"",
		"RB=\"",
		"Ordinal=2",
		SEARCH_FILTERS,
		"Scope=Body",
		LAST);

	web_url("Cart.action", 
		"URL={scheme}://{base_url}/{path}/Cart.action?addItemToCart=&workingItemId={P_random_item_id}", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer={scheme}://{base_url}/{path}/Catalog.action?viewItem=&itemId={P_random_item_id}", 
		"Snapshot=t34.inf", 
		"Mode=HTML", 
		LAST);

	lr_think_time(think_time);
	lr_end_transaction("TC_08_click_add_to_cart", LR_AUTO);
	return 0;
}
