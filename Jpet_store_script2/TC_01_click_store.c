TC_01_click_store()
{
lr_start_transaction("TC_01_click_store");

	web_add_header("Accept-Language", 
		"en-US,en;q=0.5");
	
	web_reg_save_param_regexp(
		"ParamName=C_jsession_id",
		"RegExp=Catalog.action;jsessionid=(.*?)\">",
		"Group=1",
		"Ordinal=1",
		SEARCH_FILTERS,
		"Scope=BODY",
		LAST);

	web_url("Catalog.action", 
		"URL={scheme}//{base_url}/Catalog.action", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer={scheme}//petstore.octoperf.com/", 
		"Snapshot=t2.inf", 
		"Mode=HTML", 
		LAST);
lr_end_transaction("TC_01_click_store", LR_AUTO);
	lr_think_time(think_time);

	return 0;
}
