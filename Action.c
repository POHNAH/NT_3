Action()
{

/*Correlation comment - Do not change!  Original value='130959.481247469zHDzccipDVzzzzzHtAtVHpDzQQ' Name ='userSession' Type ='ResponseBased'*/
	/* flight */
	
	web_url("welcome.pl", 
		"URL=http://localhost:1080/cgi-bin/welcome.pl?page=search", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://localhost:1080/cgi-bin/nav.pl?page=menu&in=home", 
		"Snapshot=t3.inf", 
		"Mode=HTML", 
		LAST);

	return 0;
}