TC_04_select_pets()
{
lr_start_transaction("TC_04_select_pets");

	web_add_header("Accept-Language", 
		"en-US,en;q=0.5");

	web_reg_save_param_regexp(
		"ParamName=C_product_id",
		"RegExp=viewProduct=&amp;productId=(.*?)\">",
		"Group=1",
		"Ordinal=All",
		SEARCH_FILTERS,
		"Scope=BODY",
		LAST);

	web_url("Catalog.action_2", 
		"URL={scheme}//{base_url}/Catalog.action?viewCategory=&categoryId={P_animals_name}", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer={scheme}//{base_url}/Catalog.action", 
		"Snapshot=t5.inf", 
		"Mode=HTML", 
		LAST);
	
	random_product_id = lr_paramarr_random("C_product_id");
	lr_param_sprintf("P_product_id","%s",random_product_id);

lr_end_transaction("TC_04_select_pets", LR_AUTO);
	lr_think_time(think_time);	
	return 0;
}
