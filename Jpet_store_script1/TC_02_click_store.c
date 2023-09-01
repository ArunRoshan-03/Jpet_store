TC_02_click_store()
{
lr_start_transaction("TC_02_click_store");

	web_set_max_html_param_len("8192");
	
	web_reg_save_param_ex(
		"ParamName=jsessionid",
		"LB=jsessionid=",
		"RB=\"><img src",
		SEARCH_FILTERS,
		"Scope=Body",
		"RequestUrl=*/Catalog.action*",
		LAST);

	web_reg_find("Fail=NotFound",
		"Search=Body",
		"Text=JPetStore Demo",
		LAST);

	web_url("Catalog.action", 
		"URL={scheme}://{base_url}/{path}/Catalog.action", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer={scheme}://{base_url}/", 
		"Snapshot=t27.inf", 
		"Mode=HTML", 
		LAST);
	lr_think_time(think_time);
lr_end_transaction("TC_02_click_store", LR_AUTO);

	return 0;
}