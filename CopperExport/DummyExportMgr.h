//
//  DummyExportMgr.h
//  CopperExport
//
//  Created by Fraser Speirs on 16/11/2004.
//  Copyright 2004 __MyCompanyName__. All rights reserved.
//

#import <Cocoa/Cocoa.h>
#import "ExportMgr.h"

@interface DummyExportMgr : ExportMgr {

}

// CopperExport
- (int)imageCount;
- (id)exportController;

// ImageRecord
- (NSDictionary *)imageDictionaryAtIndex:(int)index;
- (NSString *)imagePathAtIndex:(int)index;
- (BOOL)imageIsPortraitAtIndex:(int)index;
- (NSSize)imageSizeAtIndex:(int)index;
- (NSString *)thumbnailPathAtIndex:(int)index;
@end
