//
//  DummyExportMgr.m
//  CopperExport
//
//  Created by Fraser Speirs on 16/11/2004.
//  Copyright 2004 __MyCompanyName__. All rights reserved.
//

#import "DummyExportMgr.h"


@implementation DummyExportMgr
// CopperExport
- (int)imageCount {
	return 4;
}

- (id)exportController {
	return nil;
}

// CpgImageRecord
- (NSDictionary *)imageDictionaryAtIndex:(int)index {
	return nil;
}

- (NSString *)imagePathAtIndex:(int)index {
	return @"";
}

- (BOOL)imageIsPortraitAtIndex:(int)index {
	return NO;
}

- (NSSize)imageSizeAtIndex:(int)index {
	return NSMakeSize(1024.0, 768.0);
}

- (NSString *)thumbnailPathAtIndex:(int)index {
	return @"";
}
@end
