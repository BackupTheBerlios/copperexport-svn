/*
 *     Generated by class-dump 3.0.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004 by Steve Nygard.
 */

//#import "NSObject.h"
#import "ExportMgr.h"

//@class ExportMgr, ExportMgrRec, NSMutableArray, NSString, NSTimer, ProgressController;

@interface ExportController : NSObject
{
    id mWindow;
    id mExportView;
    id mExportButton;
	// TODO FIX: UGLY UGLY hack to make mImageCount visible
@public
    id mImageCount;
@protected
    ExportMgr *mExportMgr;
    id *mCurrentPluginRec;
    id *mProgressController;
    BOOL mCancelExport;
    NSTimer *mTimer;
    NSString *mDirectoryPath;
    NSMutableArray *mExportPanelNibObjects;
}

- (void)awakeFromNib;
- (void)dealloc;
- (id)currentPlugin;
- (id)currentPluginRec;
- (void)setCurrentPluginRec:(id)fp8;
- (id)directoryPath;
- (void)setDirectoryPath:(id)fp8;
- (void)show;
- (void)_openPanelDidEnd:(id)fp8 returnCode:(int)fp12 contextInfo:(void *)fp16;
- (id)panel:(id)fp8 userEnteredFilename:(id)fp12 confirmed:(BOOL)fp16;
- (BOOL)panel:(id)fp8 isValidFilename:(id)fp12;
- (BOOL)filesWillFitOnDisk;
- (void)export:(id)fp8;
- (void)_exportThread:(id)fp8;
- (void)_exportProgress:(id)fp8;
- (void)startExport:(id)fp8;
- (void)finishExport;
- (void)cancelExport;
- (void)cancel:(id)fp8;
- (void)enableControls;
- (id)window;
- (void)disableControls;
- (void)tabView:(id)fp8 willSelectTabViewItem:(id)fp12;
- (void)tabView:(id)fp8 didSelectTabViewItem:(id)fp12;
- (void)selectExporter:(id)fp8;
- (id)exportView;
- (BOOL)_hasPlugins;
- (void)_resizeExporterToFitView:(id)fp8;
- (void)_updateImageCount;

@end

