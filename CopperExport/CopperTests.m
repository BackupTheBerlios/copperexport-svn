//
//  CopperTests.m
//  CopperExport
//
//  Created by Fraser Speirs on 16/11/2004.
//  Copyright (c) 2004 __MyCompanyName__. All rights reserved.
//

#import "CopperTests.h"
#import "DummyExportMgr.h"
#import "CopperMExport.h"

@implementation CopperTests

- (void)testImageUpload {
	DummyExportMgr *mgr = [[DummyExportMgr alloc] init];
	
	CopperMExport *export = [[CopperMExport alloc] initWithExportImageObject: mgr];
}

@end
