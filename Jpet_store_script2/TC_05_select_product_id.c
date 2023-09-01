TC_05_select_product_id()
{
lr_start_transaction("TC_05_select_product_id");

	web_add_header("Accept-Language", 
		"en-US,en;q=0.5");

	web_reg_save_param_regexp(
		"ParamName=C_item_id",
		"RegExp=addItemToCart=&amp;workingItemId=(.*?)\" class=\"Button\">",
		"Group=1",
		"Ordinal=All",
		SEARCH_FILTERS,
		"Scope=BODY",
		LAST);

	web_url("Catalog.action_3", 
		"URL={scheme}//{base_url}/Catalog.action?viewProduct=&productId={P_product_id}", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer={scheme}//{base_url}/Catalog.action?viewCategory=&categoryId={P_animals_name}", 
		"Snapshot=t6.inf", 
		"Mode=HTML", 
		LAST);
	
		random_item_id=lr_paramarr_random("C_item_id");
		lr_param_sprintf("P_item_id","%s",random_item_id);

lr_end_transaction("TC_05_select_product_id", LR_AUTO);
	lr_think_time(think_time);		
	return 0;
}
