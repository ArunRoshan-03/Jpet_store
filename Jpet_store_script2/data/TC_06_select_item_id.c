TC_06_select_item_id()
{

	web_add_header("Accept-Language", 
		"en-US,en;q=0.5");

	lr_think_time(7);

	web_url("Catalog.action_4", 
		"URL=https://petstore.octoperf.com/actions/Catalog.action?viewItem=&itemId=EST-8", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://petstore.octoperf.com/actions/Catalog.action?viewProduct=&productId=K9-PO-02", 
		"Snapshot=t7.inf", 
		"Mode=HTML", 
		LAST);

	return 0;
}
