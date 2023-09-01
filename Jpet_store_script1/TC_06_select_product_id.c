TC_06_select_product_id()
{
lr_start_transaction("TC_06_select_product_id");

	web_reg_save_param_ex(
		"ParamName=C_item_id",
		"LB=workingItemId=",
		"RB=\"",
		"Ordinal=All",
		SEARCH_FILTERS,
		"Scope=Body",
		LAST);

	web_url("Catalog.action_3", 
		"URL={scheme}://{base_url}/{path}/Catalog.action?viewProduct=&productId={P_random_product_id}", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer={scheme}://{base_url}/{path}/Catalog.action?viewCategory=&categoryId={P_Random_pet_categories}", 
		"Snapshot=t31.inf", 
		"Mode=HTML", 
		LAST);
		
	random_item_id=lr_paramarr_random("C_item_id");
	lr_param_sprintf("P_random_item_id","%s",random_item_id);
	
	lr_think_time(think_time);
	lr_end_transaction("TC_06_select_product_id", LR_AUTO);

	return 0;
}
