//   *****************************************************************************************************************************************
//   ****   PLEASE NOTE: This is a READ-ONLY representation of the actual script. For editing please press the "Develop Script" button.   ****
//   *****************************************************************************************************************************************

Action()
{
	lr_start_transaction("T00_WholeScript");
	truclient_step("1", "Evaluate JavaScript code TC.userDataPoint('DataPoint_DP', 10);", "snapshot=Action_1.inf");
	truclient_step("2", "Navigate to 'http://kalimanjaro.aws.swinfra.net/html'", "snapshot=Action_2.inf");
	truclient_step("3", "Group_Navigate", "snapshot=Action_3.inf");
	{
		lr_start_transaction("T01_Navigate_Empty_page");
		truclient_step("3.1", "Navigate to 'http://kalimanjaro.hpes...mpty%20page.htm'", "snapshot=Action_3.1.inf");
		lr_end_transaction("T01_Navigate_Empty_page",0);
		lr_start_transaction("T02_Navigate_Many_images");
		truclient_step("3.2", "Navigate to 'http://kalimanjaro.hpes...aching/Mens.htm'", "snapshot=Action_3.2.inf");
		truclient_step("3.3", "Click on To Women page link", "snapshot=Action_3.3.inf");
		lr_end_transaction("T02_Navigate_Many_images",0);
		lr_start_transaction("T03_Navigate_Heavy_images");
		truclient_step("3.4", "Navigate to 'http://kalimanjaro.hpes...eavy_page1.html'", "snapshot=Action_3.4.inf");
		lr_end_transaction("T03_Navigate_Heavy_images",0);
	}
	lr_rendezvous("Rendez_Point1");
	truclient_step("5", "Group_Submit", "snapshot=Action_5.inf");
	{
		truclient_step("5.1", "Navigate to TC.getParam('Navigation')", "snapshot=Action_5.1.inf");
		truclient_step("5.2", "Click on Datasize textbox", "snapshot=Action_5.2.inf");
		truclient_step("5.3", "Type 1024000 in Datasize textbox", "snapshot=Action_5.3.inf");
		truclient_step("5.4", "Evaluate JavaScript code document.getElementById(....value = 1024000", "snapshot=Action_5.4.inf");
		lr_start_transaction("T04_Upload_1M_data");
		truclient_step("5.5", "Click on Send it button", "snapshot=Action_5.5.inf");
		lr_end_transaction("T04_Upload_1M_data",0);
		truclient_step("5.6", "Navigate to 'http://kalimanjaro.hpes...oreSleeping.htm'", "snapshot=Action_5.6.inf");
		truclient_step("5.7", "Click on time to sleep textbox", "snapshot=Action_5.7.inf");
		truclient_step("5.8", "Type 10 in time to sleep textbox", "snapshot=Action_5.8.inf");
		truclient_step("5.9", "Evaluate JavaScript code document.getElementsByNa...')[0].value = 10", "snapshot=Action_5.9.inf");
		lr_start_transaction("T05_Sleep_10sec");
		truclient_step("5.10", "Click on Submit Request button", "snapshot=Action_5.10.inf");
		lr_end_transaction("T05_Sleep_10sec",0);
		truclient_step("5.11", "Verify results page 's Visible Text contains You have wasted exactly ...nds of your life", "snapshot=Action_5.11.inf");
	}
	truclient_step("6", "Group_Sleep_3sec_and_download_ 1MB_by_100K_buffers", "snapshot=Action_6.inf");
	{
		truclient_step("6.1", "Navigate to 'http://kalimanjaro.hpes...e_interval.html'", "snapshot=Action_6.1.inf");
		truclient_step("6.2", "Type 3000 in sleep textbox", "snapshot=Action_6.2.inf");
		truclient_step("6.3", "Type 1024000 in datasize textbox", "snapshot=Action_6.3.inf");
		truclient_step("6.4", "Type 102400 in buffer size textbox", "snapshot=Action_6.4.inf");
		truclient_step("6.5", "Type 300 in interval textbox", "snapshot=Action_6.5.inf");
		truclient_step("6.6", "Evaluate JavaScript code document.getElementsByNa...[0].value = 300;", "snapshot=Action_6.6.inf");
		lr_start_transaction("T06_Sleep_3sec_and_download_ 1MB_by_100K_buffers");
		truclient_step("6.7", "Click on Submit button", "snapshot=Action_6.7.inf");
		lr_end_transaction("T06_Sleep_3sec_and_download_ 1MB_by_100K_buffers",0);
	}
	truclient_step("7", "Group_Type_50_characters", "snapshot=Action_7.inf");
	{
		truclient_step("7.1", "Navigate to 'http://kalimanjaro.hpes.../example-2.html'", "snapshot=Action_7.1.inf");
		truclient_step("7.2", "Click on text field textbox", "snapshot=Action_7.2.inf");
		lr_start_transaction("T07_Type_50_characters_with_50ms_interval");
		truclient_step("7.3", "Type 123456789012345678901234...5678901234567890 in text field textbox", "snapshot=Action_7.3.inf");
		lr_end_transaction("T07_Type_50_characters_with_50ms_interval",0);
	}
	truclient_step("8", "Group_Select from list", "snapshot=Action_8.inf");
	{
		truclient_step("8.1", "Navigate to 'http://kalimanjaro.hpes.../example-10.htm'", "snapshot=Action_8.1.inf");
		lr_start_transaction("T08_Lists_select");
		truclient_step("8.2", "Select Watch TV from what to do listbox", "snapshot=Action_8.2.inf");
		truclient_step("8.3", "Select Wilson from who to do it with listbox", "snapshot=Action_8.3.inf");
		truclient_step("8.4", "Select Socks from what to wear multi-listbox", "snapshot=Action_8.4.inf");
		truclient_step("8.5", "Select FTP from Subject listbox", "snapshot=Action_8.5.inf");
		truclient_step("8.6", "Select Immediate from priority listbox", "snapshot=Action_8.6.inf");
		lr_end_transaction("T08_Lists_select",0);
	}
	truclient_step("9", "Group_Run_javascript_onload", "snapshot=Action_9.inf");
	{
		lr_start_transaction("T09_Run_javascript_onload");
		truclient_step("9.1", "Navigate to 'http://kalimanjaro.hpes..._js_onload.html'", "snapshot=Action_9.1.inf");
		lr_end_transaction("T09_Run_javascript_onload",0);
	}
	truclient_step("10", "Group_Redirect", "snapshot=Action_10.inf");
	{
		lr_start_transaction("T10_Redirection_by_setTimeout");
		truclient_step("10.1", "Navigate to 'http://kalimanjaro.hpes...RVALU%20INC.htm'", "snapshot=Action_10.1.inf");
		truclient_step("10.2", "Wait for Shop n Save image", "snapshot=Action_10.2.inf");
		lr_end_transaction("T10_Redirection_by_setTimeout",0);
	}
	truclient_step("11", "Evaluate JavaScript code TC.userDataPoint('DataPoint_DP', 20);", "snapshot=Action_11.inf");
	lr_end_transaction("T00_WholeScript",0);

	return 0;
}
