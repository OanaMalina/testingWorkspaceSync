Action()
{

	lr_start_transaction("Homepage");

	web_add_auto_header("Upgrade-Insecure-Requests", 
		"1");

//	lr_think_time(14);

	web_url("kalimanjaro.hpeswlab.net", 
		"URL=http://kalimanjaro.hpeswlab.net/", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t5.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("Homepage",LR_AUTO);
	lr_think_time(1);

	lr_start_transaction("OldNavy");

	web_revert_auto_header("Upgrade-Insecure-Requests");

	

	web_link("OldNavy demo", 
		"Text=OldNavy demo", 
		"Snapshot=t6.inf", 
		LAST);

	web_add_auto_header("Upgrade-Insecure-Requests", 
		"1");

	web_url("home.html%C2%BFwdid=0.html", 
		"URL=http://kalimanjaro.hpeswlab.net/oldnavylocal/asp/home.html%C2%BFwdid=0.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://kalimanjaro.hpeswlab.net/oldnavylocal/", 
		"Snapshot=t7.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=../assets/homepage/H_nav_g_on.gif", ENDITEM, 
		"Url=../assets/homepage/H_nav_b_on.gif", ENDITEM, 
		"Url=../assets/homepage/H_nav_w_on.gif", ENDITEM, 
		"Url=../assets/homepage/H_nav_m_on.gif", ENDITEM, 
		"Url=../assets/homepage/H_nav_by_on.gif", ENDITEM, 
		"Url=../assets/homepage/H_nav_gf_on.gif", ENDITEM, 
		"Url=../assets/shops/sleepwear/men_on.gif", ENDITEM, 
		"Url=../assets/homepage/H_nav_MTB_on.gif", ENDITEM, 
		"Url=../assets/homepage/H_nav_MTB_off.gif", ENDITEM, 
		"Url=../assets/shops/sleepwear/men_off.gif", ENDITEM, 
		"Url=../assets/shops/sleepwear/boy_on.gif", ENDITEM, 
		"Url=../assets/shops/sleepwear/woman_off.gif", ENDITEM, 
		"Url=../assets/shops/sleepwear/woman_on.gif", ENDITEM, 
		"Url=../assets/shops/sleepwear/boy_off.gif", ENDITEM, 
		"Url=../assets/shops/sleepwear/girl_on.gif", ENDITEM, 
		"Url=../assets/shops/sleepwear/girl_off.gif", ENDITEM, 
		"Url=../assets/shops/sleepwear/b_boy_on.gif", ENDITEM, 
		"Url=../assets/shops/sleepwear/b_boy_off.gif", ENDITEM, 
		"Url=../assets/shops/sleepwear/b_girl_on.gif", ENDITEM, 
		"Url=../assets/shops/sleepwear/b_girl_off.gif", ENDITEM, 
		"Url=../assets/shops/sleepwear/matern_on.gif", ENDITEM, 
		"Url=https://safebrowsing.googleapis.com/v4/fullHashes_find?$req="
		"Ch0KDGdvb2dsZWNocm9tZRINNzIuMC4zNjI2LjEyMRIZCg0IARAGGAEiAzAwMTADEBQaAhgFWvtz7RIZCg0ICRAGGAEiAzAwMTABEBIaAhgFoF1byBIbCg0IBRAGGAEiAzAwMTABEMyQBhoCGAW4Gb7LEhsKDQgDEAYYASIDMDAxMAEQ8uYFGgIYBZnPz0sSGwoNCAEQBhgBIgMwMDEwARD-2QUaAhgFdVxJ1xIZCg0IDxAGGAEiAzAwMTABEDQaAhgFIOfoUBIbCg0IBxAGGAEiAzAwMTABEN76BBoCGAV1Ti2uEhoKDQgBEAgYASIDMDAxMAQQoRYaAhgF9XUwzRIZCg0IChAIGAEiAzAwMTABEAUaAhgFYb4sShIZCg0ICRAGGAEiAzAwMTAGEAIaAhgFKTChJBIaCg0ICBAGGAEiAzAwMTABEKoFGgIYBVrstwESGgoNCA0QBhgBIgMwMDEwARDGLxoCGAWwNukkEhsKDQgOEAYYAS"
		"IDMDAxMAEQ-ZsBGgIYBYYFCdAaKggBCAMIBQgGCAcICAgJCAoIDQgOCA8QARAIGgYKBI11EDsgASADIAQgBg==&$ct=application/x-protobuf&key=AIzaSyBOti4mM-6x9WDnZIjIeyEU21OpBXqWBgw", "Referer=", ENDITEM, 
		"Url=../assets/shops/sleepwear/matern_off.gif", ENDITEM, 
		"Url=https://clients1.google.com/tbproxy/af/query?q=Chc2LjEuMTcxNS4xNDQyL2VuIChHR0xMKRMZ2T9g7jncKtojLb0UD00kFA==", "Referer=", ENDITEM, 
		LAST);

	lr_end_transaction("OldNavy",LR_AUTO);

	lr_start_transaction("Men");

	web_revert_auto_header("Upgrade-Insecure-Requests");

	

	web_url("dept.html%C2%BFwdid=100.html", 
		"URL=http://kalimanjaro.hpeswlab.net/oldnavylocal/asp/dept.html%C2%BFwdid=100.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://kalimanjaro.hpeswlab.net/oldnavylocal/asp/home.html%C2%BFwdid=0.html", 
		"Snapshot=t8.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=../css/on_1.css", ENDITEM, 
		"Url=../assets/common/cmn_hdr_sbnv_womens_on.gif", ENDITEM, 
		"Url=../assets/common/cmn_hdr_sbnv_girls_on.gif", ENDITEM, 
		"Url=../assets/common/cmn_hdr_sbnv_boys_on.gif", ENDITEM, 
		"Url=../assets/common/cmn_hdr_sbnv_gift_on.gif", ENDITEM, 
		"Url=../assets/common/cmn_hdr_sbnv_baby_on.gif", ENDITEM, 
		"Url=../assets/common/cmn_hdr_sbnv_mom_on.gif", ENDITEM, 
		"Url=../assets/common/cmn_hdr_sbnv_mens_off.gif", ENDITEM, 
		"Url=../assets/common/common_header_subnav_home.gif", ENDITEM, 
		LAST);

	lr_end_transaction("Men",LR_AUTO);
	lr_think_time(3);

	return 0;
}