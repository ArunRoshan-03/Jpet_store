TC_09_select_pets_until_2_or_8_item_id()
{

	web_add_auto_header("Accept-Language", 
		"en-US,en;q=0.5");

	lr_think_time(10);

	web_url("Catalog.action_5", 
		"URL=https://petstore.octoperf.com/actions/Catalog.action?viewCategory=&categoryId=REPTILES", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://petstore.octoperf.com/actions/Cart.action", 
		"Snapshot=t10.inf", 
		"Mode=HTML", 
		LAST);

	lr_think_time(2);

	web_link("RP-SN-01", 
		"Text=RP-SN-01", 
		"Snapshot=t11.inf", 
		LAST);

	web_link("EST-12", 
		"Text=EST-12", 
		"Snapshot=t12.inf", 
		LAST);

	web_link("Add to Cart", 
		"Text=Add to Cart", 
		"Snapshot=t13.inf", 
		LAST);

	lr_think_time(17);

	web_submit_form("Cart.action_3", 
		"Snapshot=t14.inf", 
		ITEMDATA, 
		"Name=EST-8", "Value=4", ENDITEM, 
		"Name=EST-12", "Value=7", ENDITEM, 
		"Name=updateCartQuantities", "Value=Update Cart", ENDITEM, 
		LAST);

	return 0;
}
