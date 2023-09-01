TC_05_select_product_id()
{

	web_add_header("Accept-Language", 
		"en-US,en;q=0.5");

	lr_think_time(7);

	web_url("Catalog.action_3", 
		"URL=https://petstore.octoperf.com/actions/Catalog.action?viewProduct=&productId=K9-PO-02", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://petstore.octoperf.com/actions/Catalog.action?viewCategory=&categoryId=DOGS", 
		"Snapshot=t6.inf", 
		"Mode=HTML", 
		LAST);

	return 0;
}
