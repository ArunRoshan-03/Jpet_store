TC_10_remove_item_id()
{

	web_add_header("Accept-Language", 
		"en-US,en;q=0.5");

	lr_think_time(7);

	web_url("Cart.action_4", 
		"URL=https://petstore.octoperf.com/actions/Cart.action?removeItemFromCart=&workingItemId=EST-8", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://petstore.octoperf.com/actions/Cart.action", 
		"Snapshot=t15.inf", 
		"Mode=HTML", 
		LAST);

	return 0;
}
