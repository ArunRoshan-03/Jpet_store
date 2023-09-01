TC_05_select_pets()
{
	lr_start_transaction("TC_05_select_pets");
	
	web_reg_save_param_ex(
		"ParamName=C_select_pet_sourcePage",
		"LB=name=\"_sourcePage\" value=\"",
		"RB=\"",
		SEARCH_FILTERS,
		"Scope=Body",
		LAST);

web_reg_save_param_ex(
		"ParamName=C_select_pet_fp",
		"LB=name=\"__fp\" value=\"",
		"RB=\"",
		SEARCH_FILTERS,
		"Scope=Body",
		LAST);
	
	web_reg_save_param_ex(
		"ParamName=C_product_id",
		"LB=productId=",
		"RB=\"",
		"Ordinal=All",
		SEARCH_FILTERS,
		"Scope=Body",
		LAST);

	web_url("Catalog.action_2", 
		"URL={scheme}://{base_url}/{path}/Catalog.action?viewCategory=&categoryId={P_Random_pet_categories}", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer={scheme}://{base_url}/{path}/Catalog.action", 
		"Snapshot=t30.inf", 
		"Mode=HTML", 
		LAST);
		random_product_id=lr_paramarr_random("C_product_id");
		lr_param_sprintf("P_random_product_id","%s",random_product_id);	
		
		lr_think_time(think_time);
		lr_end_transaction("TC_05_select_pets", LR_AUTO);

	return 0;
}