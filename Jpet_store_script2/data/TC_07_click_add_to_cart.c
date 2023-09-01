TC_07_click_add_to_cart()
{

	web_add_header("Accept-Language", 
		"en-US,en;q=0.5");

	lr_think_time(6);

	web_url("Cart.action", 
		"URL=https://petstore.octoperf.com/actions/Cart.action?addItemToCart=&workingItemId=EST-8", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://petstore.octoperf.com/actions/Catalog.action?viewItem=&itemId=EST-8", 
		"Snapshot=t8.inf", 
		"Mode=HTML", 
		LAST);

	return 0;
}
