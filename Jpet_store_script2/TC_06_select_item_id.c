TC_06_select_item_id()
{
lr_start_transaction("TC_06_select_item_id");

	web_add_header("Accept-Language", 
		"en-US,en;q=0.5");

	web_url("Catalog.action_4", 
		"URL={scheme}//{base_url}/Catalog.action?viewItem=&itemId={P_item_id}", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer={scheme}//{base_url}/Catalog.action?viewProduct=&productId={P_product_id}", 
		"Snapshot=t7.inf", 
		"Mode=HTML", 
		LAST);

lr_end_transaction("TC_06_select_item_id", LR_AUTO);
	lr_think_time(think_time);	
	return 0;
}
