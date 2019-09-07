/***********************************************************
* Copyright (C) 2019 6degrees.xyz Inc.
*
* This file is part of the 6D.ai Beta SDK.
***********************************************************/

extern "C" {
    void GetAPIKey(char* apiKey, int bufferSize)
    {
        NSString* plistFile = [[NSBundle mainBundle] pathForResource:@"SixDegreesSDK" ofType:@"plist"];
        if (plistFile) 
        {
            NSDictionary *plistDict = [NSDictionary dictionaryWithContentsOfFile:plistFile];
            if (plistDict) 
            {
                id dictApiKey = [plistDict valueForKey:@"SIXDEGREES_API_KEY"];
                if (dictApiKey && [dictApiKey isKindOfClass:[NSString class]]) 
                {
                    strcpy(apiKey, [dictApiKey UTF8String]);
                }
            }
        }
    }
}
