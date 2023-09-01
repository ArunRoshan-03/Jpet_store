TC_04_enter_sigin_credentails()
{
lr_start_transaction("TC_04_enter_sigin_credentails");


web_reg_save_param_ex(
		"ParamName=C_pet_categories",
		"LB=categoryId=",
		"RB=\" shape",
		"Ordinal=All",
		SEARCH_FILTERS,
		"Scope=Body",
		"IgnoreRedirections=Yes",
		"RequestUrl=*/Catalog.action*",
		LAST);
	web_reg_find("Fail=NotFound",
		"Search=Body",
		"Text= Welcome ABC!",
		LAST);

	web_submit_data("Account.action", 
		"Action={scheme}://{base_url}/{path}/Account.action", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer={scheme}://{base_url}/{path}/Account.action;jsessionid={jsessionid}?signonForm=", 
		"Snapshot=t29.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=username", "Value=j2ee", ENDITEM, 
		"Name=password", "Value=j2ee", ENDITEM, 
		"Name=signon", "Value=Login", ENDITEM, 
		"Name=_sourcePage", "Value={C_sourcePage}", ENDITEM, 
		"Name=__fp", "Value={C_fp}", ENDITEM, 
		LAST);
		random_pet_categories=lr_paramarr_random("C_pet_categories");
		lr_param_sprintf("P_Random_pet_categories","%s",random_pet_categories);	
		
		lr_think_time(think_time);
		lr_end_transaction("TC_04_enter_sigin_credentails", LR_AUTO);

	return 0;
}
