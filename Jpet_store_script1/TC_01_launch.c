TC_01_launch()
{
	lr_start_transaction("TC_01_launch");
	web_set_sockets_option("SSL_VERSION", "AUTO");


	web_url("{base_url}", 
		"URL={scheme}://{base_url}/", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t7.inf", 
		"Mode=HTML", 
		LAST);
	lr_think_time(think_time);
	lr_end_transaction("TC_01_launch", LR_AUTO);

	return 0;
}
