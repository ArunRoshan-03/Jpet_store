TC_03_click_sigin_link()
{
	lr_start_transaction("TC_03_click_sigin_link");
		web_reg_save_param_ex(
		"ParamName=C_sourcePage",
		"LB=name=\"_sourcePage\" value=\"",
		"RB=\"",
		"Ordinal=2",
		SEARCH_FILTERS,
		"Scope=Body",
		LAST);
	
		web_reg_save_param_ex(
		"ParamName=C_fp",
		"LB=name=\"__fp\" value=\"",
		"RB=\"",
		"Ordinal=2",
		SEARCH_FILTERS,
		"Scope=Body",
		LAST);
	web_reg_find("Fail=NotFound",
		"Search=Body",
		"Text=Please enter your username and password",
		LAST);

	web_url("Account.action;jsessionid={jsessionid}", 
		"URL={scheme}://{base_url}/{path}/Account.action;jsessionid={jsessionid}?signonForm=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer={scheme}://{base_url}/{path}/Catalog.action", 
		"Snapshot=t28.inf", 
		"Mode=HTML", 
		LAST);
	
	lr_think_time(think_time);
	lr_end_transaction("TC_03_click_sigin_link", LR_AUTO);

	return 0;
}
