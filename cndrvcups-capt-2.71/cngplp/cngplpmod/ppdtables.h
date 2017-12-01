/*
 *  Print Dialog for Canon LIPS/PS/LIPSLX/UFR2/CAPT Printer.
 *  Copyright CANON INC. 2004
 *
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program; if not, write to the Free Software
 *  Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 */

#ifndef	_PPDTABLES_H_
#define	_PPDTABLES_H_

#include "ppdkeys.h"


const char *items_table[] = {
	kPPD_Items_PageSize,
	kPPD_Items_MediaType,
	kPPD_Items_InputSlot,
	kPPD_Items_OutputBin,
	kPPD_Items_Duplex,
	kPPD_Items_Booklet,
	kPPD_Items_BindEdge,
	kPPD_Items_CNOutputPartition,
	kPPD_Items_Collate,
	kPPD_Items_StapleLocation,
	kPPD_Items_CNSaddleStitch,
	kPPD_Items_CNTrimming,
	kPPD_Items_CNZfolding,
	kPPD_Items_CNPunch,
	kPPD_Items_CNInserter,
	kPPD_Items_Resolution,
	kPPD_Items_CNColorMode,
	kPPD_Items_CNHalftone,
	kPPD_Items_CNBlackSubstitute,
	kPPD_Items_CNPureBlackProcess,
	kPPD_Items_CNTonerSaving,
	kPPD_Items_CNFinisher,
	kPPD_Items_CNPuncher,
	kPPD_Items_CNFolder,
	kPPD_Items_CNInsertUnit,
	kPPD_Items_CNTrimmer,
	kPPD_Items_CNDuplexUnit,
	kPPD_Items_CNJobExecMode,
	kPPD_Items_CNTonerDensity,
	kPPD_Items_CNSuperSmooth,
	kPPD_Items_CNFixingMode,
	kPPD_Items_CNBackPaperPrint,
	kPPD_Items_CNOutputFace,
	kPPD_Items_CNRotatePrint,
	kPPD_Items_CNImageSpecialProcess,
	kPPD_Items_CNCopySetNumbering,
	kPPD_Items_CNDraftMode,
	kPPD_Items_CNInterleafSheet,
	kPPD_Items_CNInterleafMediaType,
	kPPD_Items_CNInterleafPrint,
	kPPD_Items_CNSrcOption,
	kPPD_Items_CNColorHalftone,
	kPPD_Items_CNCTonerDensity,
	kPPD_Items_CNMTonerDensity,
	kPPD_Items_CNYTonerDensity,
	kPPD_Items_CNKeepGray,
	kPPD_Items_CNSkipBlank,
	kPPD_Items_CNDetectPaperSize,
	kPPD_Items_CNPureBlackText,
	kPPD_Items_CNBlackOverprint,
	kPPD_Items_CNRGBSourceProfile,
	kPPD_Items_CNRGBMatchingMethod,
	kPPD_Items_CNRGBPureBlackProcess,
	kPPD_Items_CNCMYKSimulationProfile,
	kPPD_Items_CNUseGrayScaleProfile,
	kPPD_Items_CNOutputProfile,
	kPPD_Items_CNGradationSmoothing,
	kPPD_Items_CNImageRefinement,
	kPPD_Items_CNLineRefinement,
	kPPD_Items_CNMirrorPrint,
	kPPD_Items_CNSpecialPrintMode,
	kPPD_Items_CNPostcardPrinting,
	kPPD_Items_CNLastPagePrintMode,
	kPPD_Items_CNPaperSelection,
	kPPD_Items_CNInterleafSlot,
	kPPD_Items_CNContinuePrinting,
	kPPD_Items_CNPostcardPrintMode,
	kPPD_Items_CNGradation,
	kPPD_Items_CNGradationPrint,
	kPPD_Items_CNXColorAdjustment,
	kPPD_Items_CNYColorAdjustment,
	kPPD_Items_CNBrightness,
	kPPD_Items_CNContrast,
	kPPD_Items_CNImageAdjustment,
	kPPD_Items_CNGraphicsAdjustment,
	kPPD_Items_CNTextAdjustment,
	kPPD_Items_CNMatchingMode,
	kPPD_Items_CNMatchingMethod,
	kPPD_Items_CNImageMatchingMethod,
	kPPD_Items_CNGraphicsMatchingMethod,
	kPPD_Items_CNTextMatchingMethod,
	kPPD_Items_CNMonitorProfile,
	kPPD_Items_CNImageMonitorProfile,
	kPPD_Items_CNGraphicsMonitorProfile,
	kPPD_Items_CNTextMonitorProfile,
	kPPD_Items_CNGamma,
	kPPD_Items_CNBWHalftone,

	kPPD_Items_CNSpotColorMatching,
	kPPD_Items_CNOHPPrintMode,
	kPPD_Items_CNAdvancedSmoothing,
	kPPD_Items_CNSetFrontSheet,
	kPPD_Items_CNFrontPrintOn,
	kPPD_Items_CNFrontPaperSrc,
	kPPD_Items_CNSetBackSheet,
	kPPD_Items_CNBackPrintOn,
	kPPD_Items_CNBackPaperSrc,

	kPPD_Items_CNTrayCSetting,
	kPPD_Items_CNSidePaperDeck,
	kPPD_Items_CNHardDisk,
	kPPD_Items_CNSpecialFineLineProcess,
	kPPD_Items_CNShiftStartPrintPosition,
	kPPD_Items_CNProcessColorMode,
	kPPD_Items_CNDuplexFixMode,
	kPPD_Items_CNCalibrate,
	kPPD_Items_CNDuplex,
	kPPD_Items_CNCreep,
	kPPD_Items_CNStaple,
	kPPD_Items_CNTypeWing,
	kPPD_Items_CNImageCompression,
	kPPD_Items_CNDensityFineAdjustment,
	kPPD_Items_CNDensityFineAdjustmentNum,
	kPPD_Items_CNCADMode,
	kPPD_Items_CNGraphicsMode,
	kPPD_Items_CNCompositeOverprint,
	kPPD_Items_CNCombineColorSeparation,

	kPPD_Items_CNCurlCorrection,
	kPPD_Items_CNPausePrintingMT,
	kPPD_Items_CNAppColorMatching,

	kPPD_Items_CNFeedCustomHorizontally,

	kPPD_Items_CNDisplacementCorrection,
	kPPD_Items_CNProgress,
	kPPD_Items_CNNotification,
	kPPD_Items_CNOverlay,
	kPPD_Items_CNSelectBy,
	kPPD_Items_CNOHPPrint,
	kPPD_Items_CNInterleafInputSlot,
	kPPD_Items_CNPrintOtherSide,
	kPPD_Items_CNInsertSheet,
	kPPD_Items_CNSheetForInsertion,
	kPPD_Items_CNInsertPrintSide,
	kPPD_Items_CNInsertInputSlot,
	kPPD_Items_CNPrioritizeLineText,
	kPPD_Items_CNUsePSBrightness,
	kPPD_Items_CNPSBrightness,
	kPPD_Items_CNCollate,
	kPPD_Items_CNCfolding,
	kPPD_Items_CNPBindCoversheet,
	kPPD_Items_CNPBindFinishing,
	kPPD_Items_CNPBindMainPaper,
	kPPD_Items_CNAdjustTrim,
	kPPD_Items_CNTrustPrint,
	kPPD_Items_CNOverlayFormComposition,
	kPPD_Items_CNUseSharpness,
	kPPD_Items_CNSharpness,
	kPPD_Items_CNTonerDensityAdjustment,
	kPPD_Items_CNLineControl,
	kPPD_Items_CNSmallSizeCurl,
	kPPD_Items_CNAuthenticate,
	kPPD_Items_CNUseJobAccount,
	kPPD_Items_CNSendTime,
	kPPD_Items_CNCoverPageMode,
	kPPD_Items_CNInSlotManMediaType,
	kPPD_Items_CNInSlot1MediaType,
	kPPD_Items_CNInSlot2MediaType,
	kPPD_Items_CNInSlot3MediaType,
	kPPD_Items_CNInSlot4MediaType,
	kPPD_Items_CNSideDeckMediaType,
	kPPD_Items_CNUseOutsideLineNum,
	kPPD_Items_CNLineSelection,
	kPPD_Items_CNFAXNumOfLine,
	kPPD_Items_CNSpecID,
	kPPD_Items_CNTotalMemSize,
	kPPD_Items_CNDupUnit,
	kPPD_Items_CNFAXLineType,
	kPPD_Items_CNEnableTrustPrint,
	kPPD_Items_CNFinTray,
	kPPD_Items_CNStacker,
	kPPD_Items_CNBinderOption,
	kPPD_Items_CNEnableMultiInserter,
	kPPD_Items_CNTonerVolumeAdjustment,
	kPPD_Items_CNCopyTray,
	kPPD_Items_CNCfoldSetting,
	kPPD_Items_CNTabPrintMode,
	kPPD_Items_CNOutputColorSpeed,
	kPPD_Items_CNInSlot5MediaType,
	kPPD_Items_CNInSlot6MediaType,
	kPPD_Items_CNInSlot7MediaType,
	kPPD_Items_CNInSlot8MediaType,
	kPPD_Items_CNOptionStaple,

	kPPD_Items_CNSpecialPrintAdjustmentA,
	kPPD_Items_CNSpecialPrintAdjustmentB,
	kPPD_Items_CNRevicePostcard,
	kPPD_Items_CNOutputAdjustment,
	kPPD_Items_CNSpecialSmooth,
	kPPD_Items_CNEnableQuick,
	kPPD_Items_CNEnableFine,
	kPPD_Items_CNEnableSuperFine,
	kPPD_Items_CNFAXDialLine1,
	kPPD_Items_CNFAXDialLine2,
	kPPD_Items_CNFAXDialLine3,
	kPPD_Items_CNWrinklesCorrectionOutput,
	kPPD_Items_CNPdeUseJobAccount,
	kPPD_Items_CNProPuncher,
	kPPD_Items_CNMultiPunch,
	kPPD_Items_CNTopBottomTrimmer,
	kPPD_Items_CNFAXDialLine4,
	kPPD_Items_CNSaddleUnit,
	kPPD_Items_CNClearCoatingApplication,
	kPPD_Items_CNGlossyPlainPaperProc,
	kPPD_Items_CNVfolding,
	kPPD_Items_CNHalfFolding,
	kPPD_Items_CNAccordionZfolding,
	kPPD_Items_CNDoubleParallelFolding,
	kPPD_Items_CNHalfFoldSetting,
	kPPD_Items_CNAccordionZfoldSetting,
	kPPD_Items_CNDoubleParallelFoldSetting,
	kPPD_Items_CNSaddleSetting,
	kPPD_Items_CNTrapping,
	kPPD_Items_CNTrapWidth,
	kPPD_Items_CNTrapDensity,
	kPPD_Items_CNSizeOverride,
	kPPD_Items_CNReverseOrder,
	kPPD_Items_CNDotGain,
	kPPD_Items_CNGrayConversion,
	kPPD_Items_CNPBindCoverSelectBy,
	kPPD_Items_CNPBindCoverPaperSource,
	kPPD_Items_CNPBindCoverMediaType,
	kPPD_Items_CNPBindSpecifyFinishingBy,
	kPPD_Items_CNSpecifyNumOfCopiesStack,
	kPPD_Items_CNRGBMatchingMode,
	kPPD_Items_CNRGBInputLightClrSpace,
	kPPD_Items_CNCMYKMatchingMode,
	kPPD_Items_CNCMYKInputLightClrSpace,
	kPPD_Items_CNInSlot9MediaType,
	kPPD_Items_CNInSlot10MediaType,
	kPPD_Items_CNInnerTrimmer,
	kPPD_Items_CNUserSeparateMode,
	kPPD_Items_CNSorterFinish,
	kPPD_Items_CNStackerFinish,
	kPPD_Items_CNBinNameMode,
	kPPD_Items_CNUseSubstituteFont,
	kPPD_Items_CNPrinterFont,
	kPPD_Items_CNSubstituteEuroFont,
	kPPD_Items_CNEnableSubstituteFont,
	kPPD_Items_CNPdeDisplayAllWarning,
	kPPD_Items_CNPlainPaperCurlCorrect,
	kPPD_Items_CNWrinkleEscapeMode,
	kPPD_Items_CNCurlPaperModeB,
	kPPD_Items_CNSpecialPrintAdjustmentC,
	kPPD_Items_CNUseColorantDensity,
	kPPD_Items_CNColorantDensity,
	kPPD_Items_CNSpecialPrintingModeA,
	kPPD_Items_CNSpecialPrintingModeB,
	kPPD_Items_CNBarCode,
	kPPD_Items_CNWhiteGap,
	kPPD_Items_CNNumberOfColors,
	kPPD_Items_CNColorToUseWithBlack,
	kPPD_Items_CNSaddlePress,
	kPPD_Items_CNPrintImageAdjustment,
	kPPD_Items_CNDeviceType,
	kPPD_Items_CNFoldSetting,
	kPPD_Items_CNPrintStyle,
	kPPD_Items_CNFoldDetail,
	kPPD_Items_CNUseSecuredPrint,
	kPPD_Items_CNFeedAFiveVertically,
	kPPD_Items_CNFineAdjustDensityHigh,
	kPPD_Items_CNFineAdjustDensityMedium,
	kPPD_Items_CNFineAdjustDensityLow,
	kPPD_Items_CNCFineAdjustDensityHigh,
	kPPD_Items_CNCFineAdjustDensityMedium,
	kPPD_Items_CNCFineAdjustDensityLow,
	kPPD_Items_CNMFineAdjustDensityHigh,
	kPPD_Items_CNMFineAdjustDensityMedium,
	kPPD_Items_CNMFineAdjustDensityLow,
	kPPD_Items_CNYFineAdjustDensityHigh,
	kPPD_Items_CNYFineAdjustDensityMedium,
	kPPD_Items_CNYFineAdjustDensityLow,
	kPPD_Items_CNVfoldingTrimming,
	kPPD_Items_CNBarCodeMode,
	kPPD_Items_CNCoverPageStyle,
	kPPD_Items_CNEnableCMSSettings,
	kPPD_Items_CNUseCPCASecurityUser,
	kPPD_Items_CNUseCPCASecurityJobPassword,
	kPPD_Items_CNUseCPCASecurityFCode,
	kPPD_Items_CNDensityFineAdjustmentReos2,
	kPPD_Items_CNFeedAFiveHorizontally,
	kPPD_Items_CNFeedStatementHorizontally,
	kPPD_Items_CNSpecialSettingsOne,
	kPPD_Items_CNDraftModeTwo,
	kPPD_Items_CNHyperSharpness,
	kPPD_Items_CNFAXIPFAXINTRA,
	kPPD_Items_CNFAXIPFAXVoIP,
	kPPD_Items_CNFAXIPFAXNGN,
	kPPD_Items_CNFAXIPFAXMyNumberNGN,
    kPPD_Items_CNSpecialPrintProcess,
	kPPD_Items_CNWidthAdjustment,
	kPPD_Items_CNTrapUpperWidth,
	kPPD_Items_CNTrapLowerWidth,
	kPPD_Items_CNTrapLeftWidth,
	kPPD_Items_CNTrapRightWidth,
	kPPD_Items_CNTrapCyanDensity,
	kPPD_Items_CNTrapMagentaDensity,
	kPPD_Items_CNTrapYellowDensity,
	kPPD_Items_CNOptimizeImageComp,
	kPPD_Items_CNTrimSpecifyMethod,
    kPPD_Items_CNImprovePrintSpeed,
	kPPD_Items_CNColorTonerVolumeAdjustment,
    kPPD_Items_CNTimingOfAutoEjectStacker,
    kPPD_Items_CNInterleafSelectBy,

#if !defined(__APPLE__) && !defined(_OPAL)
	kPPD_Items_CNSpecialPrintAdjustment,
	kPPD_Items_CNBookletOffset,
#endif

	kPPD_Items_CNSpecialPrintAdjustmentV,
	kPPD_Items_CNUseUsrManagement,
	kPPD_Items_CNUsrManagement,

	NULL
};

typedef struct{
	int id;
	char *key;
}IDKey;
IDKey IDKeyDevOptionTbl[] = {
	{ID_DEVICE_INFO,								NULL},
	{ID_SIDED1PRINT,								NULL},
	{ID_SELECTBY,									kPPD_Items_Device_SelectBy},
	{ID_BOOKLET_DLG,								kPPD_Items_Device_Booklet},
	{ID_DATANAME,									kPPD_Items_Device_CNDocName},
	{ID_ENTERNAME,									kPPD_Items_Device_CNDocName},
	{ID_BOXIDNUM,									kPPD_Items_Device_CNMailBox},
	{ID_GUTTER,										kPPD_Items_Device_CNBindEdgeShift},
	{ID_SECURED_DOCNAME,							kPPD_Items_Device_CNDocName},
	{ID_SECURED_USRNAME,							kPPD_Items_Device_CNUsrName},
	{ID_SECURED_PASSWD,								kPPD_Items_Device_CNSecuredPrint},
	{ID_JOBACCOUNT,									NULL},
	{ID_JOBACCOUNT_ID,								kPPD_Items_Device_CNJobAccount},
	{ID_JOBACCOUNT_PASSWD,							kPPD_Items_Device_CNJobAccount},
	{ID_PRINTERTYPE,								NULL},
	{ID_COLOR_MODE,									NULL},
	{ID_SPECIAL_FUNC,								NULL},
	{ID_MAX_COPIES,									NULL},
	{ID_MAX_BOXIDNUM,								NULL},
	{ID_MAX_GUTTER,									NULL},
	{ID_DOC_LENGTH,									NULL},
	{ID_STARTNUM,									kPPD_Items_Device_CNStartingNumber},
	{ID_LIST_MEDIATYPE,								NULL},
	{ID_USERID,										NULL},
	{ID_BACKPAPERPRINT_LABEL,						NULL},
	{ID_DISABLE_JOBACCOUNT_BW,						kPPD_Items_Device_CNDisableJobAccountingBW},
	{ID_SHOW_DISABLE_JOBACCOUNT_BW,					NULL},
	{ID_DETECTPAPER_LABEL,							NULL},
	{ID_CNDPICONPICTID,								NULL},
	{ID_CNENABLEFINISHFLAG,							NULL},
	{ID_CNENABLEINPUTFLAG,							NULL},
	{ID_CNENABLEQUALITYTYPE,						NULL},
	{ID_USTYPE,										NULL},
	{ID_INPUTSLOT_TYPE,								NULL},

	{ID_CNSHIFTTYPE,								NULL},
	{ID_CNSHIFTUPWARDS,								kPPD_Items_Device_CNShiftUpwards},
	{ID_CNSHIFTRIGHT,								kPPD_Items_Device_CNShiftRight},
	{ID_CNSHIFTFRLONGEDGE,							kPPD_Items_Device_CNShiftFrLongEdge},
	{ID_CNSHIFTFRSHORTEDGE,							kPPD_Items_Device_CNShiftFrShortEdge},
	{ID_CNSHIFTBKLONGEDGE,							kPPD_Items_Device_CNShiftBkLongEdge},
	{ID_CNSHIFTBKSHORTEDGE,							kPPD_Items_Device_CNShiftBkShortEdge},
	{ID_CNJOBNOTE,									kPPD_Items_Device_CNJobNote},
	{ID_CNJOBDETAILS,								kPPD_Items_Device_CNJobDetails},
	{ID_CNOFFSETNUM,								kPPD_Items_Device_CNOffsetNum},

	{ID_CNINPUTSELECT,								kPPD_Items_Device_CNInputSelect},
	{ID_CNGUTTERSHIFTNUM,							kPPD_Items_CNGutterShiftNum},
	{ID_MAX_GUTTER_SHIFT_NUM,						NULL},
	{ID_CNTABSHIFT,									kPPD_Items_Device_CNTabShift},
	{ID_DRIVERROOTPATH,								NULL},
	{ID_CNMEDIABRANDLIST,							NULL},
	{ID_CNMEDIABRAND,								NULL},
	{ID_CNMEDIALIBRARYID,							kPPD_Items_Device_CNMediaLibraryID},
	{ID_CNMEDIASHAPE,								kPPD_Items_Device_CNMediaShape},
	{ID_CNINSERTMEDIABRANDLIST,						NULL},
	{ID_CNINSERTMEDIABRAND,							NULL},
	{ID_CNINSERTMEDIALIBRARYID,						kPPD_Items_Device_CNInsertMediaLibraryID},
	{ID_CNINTERLEAFMEDIABRANDLIST,					NULL},
	{ID_CNINTERLEAFMEDIABRAND,						NULL},
	{ID_CNINTERLEAFMEDIALIBRARYID,					kPPD_Items_Device_CNInterleafMediaLibraryID},
	{ID_CNINSERTTABSHIFT,							kPPD_Items_Device_CNInsertTabShift},
	{ID_CNINSERTPOS,								kPPD_Items_Device_CNInsertPos},
	{ID_CNTABINSERTPOS,								kPPD_Items_Device_CNTabInsertPos},
	{ID_CNFORMHANDLE,								kPPD_Items_Device_CNFormHandle},
	{ID_CNOVERLAYFILENAME,							kPPD_Items_Device_CNOverlayFileName},
	{ID_CNADJUSTTRIMNUM,							kPPD_Items_Device_CNAdjustTrimNum},
	{ID_CNSENDTIMENUM,								kPPD_Items_Device_CNSendTimeNum},
	{ID_CNOUTSIDELINENUMBER,						kPPD_Items_Device_CNOutsideLineNumber},
	{ID_CNSENDER,									kPPD_Items_Device_CNSender},
	{ID_HOLD_NAME,									kPPD_Items_Device_CNDocName},
	{ID_HOLDQUEUE_DATANAME,	kPPD_Items_Device_CNDocName},
	{ID_MIN_GUTTER_SHIFT_NUM,						NULL},
	{ID_DEFAULT_GUTTER_SHIFT_NUM,						NULL},
	{ID_ENABLECNOFFSETNUM,								kPPD_Items_EnableCNOffsetNum},
	{ID_CNUIOFFSETMAX,								kPPD_Items_CNUIOffsetMax},
	{ID_LIST_PAGESIZE,								NULL},
	{ID_CNUITRIMVALMAX,			kPPD_Items_CNUITrimValMax},
	{ID_CNUITRIMVALMIN,			kPPD_Items_CNUITrimValMin},
	{ID_CNUIADJUSTTRIMNUMDEFAULT, 	kPPD_Items_CNUIAdjustTrimNumDefault},
	{ID_CNADJUSTFORETRIMNUM,						kPPD_Items_Device_CNAdjustForeTrimNum},
	{ID_CNADJUSTTOPBOTTOMTRIMNUM,					kPPD_Items_Device_CNAdjustTopBottomTrimNum},
	{ID_CNFEEDPAPERNAME,							kPPD_Items_Device_CNFeedPaperName},
	{ID_CNPBINDCOVERMEDIABRANDLIST,					NULL},
	{ID_CNPBINDCOVERMEDIABRAND,						NULL},
	{ID_CNPBINDCOVERMEDIALIBRARYID,					kPPD_Items_Device_CNPBindCoverMediaLibraryID},
	{ID_CNPBINDFINISHFORETRIMNUM,					kPPD_Items_Device_CNPBindFinishForeTrimNum},
	{ID_CNPBINDFINISHTOPBOTTOMTRIMNUM,				kPPD_Items_Device_CNPBindFinishTopBottomTrimNum},
	{ID_CNSTACKCOPIESNUM,							kPPD_Items_Device_CNStackCopiesNum},
	{ID_CNINSERTPOSPAPERSOURCE,						kPPD_Items_Device_CNInsertPosPaperSource},
	{ID_CNINSERTPOSPRINTON,							kPPD_Items_Device_CNInsertPosPrinton},
	{ID_CNTABINSERTPOSPAPERSOURCE,					kPPD_Items_Device_CNTabInsertPosPaperSource},
	{ID_CNTABINSERTPOSPRINTON,						kPPD_Items_Device_CNTabInsertPosPrinton},
	{ID_CNBINNAME,									kPPD_Items_Device_CNBinName},
	{ID_CNBINNAME_ARRAY,							kPPD_Items_Device_CNBinNameArray},
	{ID_CNSADDLEPRESSADJUSTMENT,					kPPD_Items_Device_CNSaddlePressAdjustment},
	{ID_CNLISTIDSPECIALPRINTMODE,		NULL},
	{ID_CNUIPAPERSOURCETYPE,           kPPD_Items_CNUIPaperSourceType},
	{ID_PCFILENAME,									NULL},
	{ID_MANUFACTURER,								NULL},
	{ID_NICKNAME,									NULL},
	{ID_CNPDLTYPE,									NULL},
	{ID_APPRINTERICONPATH,							NULL},
	{ID_CNTABINSERTMULTIPAPERNUMBER,				kPPD_Items_Device_CNTabInsertMultiNumber},
	{ID_CNTABINSERTMULTIPAPERSOURCE,				kPPD_Items_Device_CNTabInsertMultiPaperSource},
	{ID_CNTABINSERTMULTIPAPERTYPE,					kPPD_Items_Device_CNTabInsertMultiPaperType},
	{ID_CNOUTSIDELINENUMINTRA,						kPPD_Items_Device_CNOutsideLineNumberIntra},
	{ID_CNOUTSIDELINENUMNGN,						kPPD_Items_Device_CNOutsideLineNumberNgn},
	{ID_CNOUTSIDELINENUMMYNUMBERNGN,                kPPD_Items_Device_CNOutsideLineNumberNgnMyNumber},
	{ID_CNOUTSIDELINENUMVOIP,						kPPD_Items_Device_CNOutsideLineNumberVoip},
	{ID_CONFLICTCNOFFSETNUM,						NULL},
	{ID_CNFORMLIST,									NULL},

#if !defined(__APPLE__) && !defined(_OPAL)
	{ID_SHOW_JOBACCOUNT,							NULL},
#endif
	{ID_CNUSRPASSWORD,								kPPD_Items_Device_CNUsrPassword},

	{-1, NULL},
};

const char *items_table_common[] = {
	kPPD_Items_Common_CNCopies,
	kPPD_Items_Common_page_set,
	kPPD_Items_Common_page_ranges,
	kPPD_Items_Common_outputorder,
	kPPD_Items_Common_number_up,
	kPPD_Items_Common_orientation_requested,
	kPPD_Items_Common_brightness,
	kPPD_Items_Common_gamma,
	kPPD_Items_Common_job_sheets_start,
	kPPD_Items_Common_job_sheets_end,

	NULL
};
const int items_table_common_num = 10;

const char *items_table_image[] = {
	kPPD_Items_Image_hue,
	kPPD_Items_Image_saturation,
	kPPD_Items_Image_ppi,
	kPPD_Items_Image_scaling,
	kPPD_Items_Image_natural_scaling,
	kPPD_Items_Image_position,

	NULL
};
const int items_table_image_num = 7;

const char *items_table_text[] = {
	kPPD_Items_Text_cpi,
	kPPD_Items_Text_lpi,
	kPPD_Items_Text_columns,
	kPPD_Items_Text_page_left,
	kPPD_Items_Text_page_right,
	kPPD_Items_Text_page_top,
	kPPD_Items_Text_page_bottom,
	kPPD_Items_Text_prettyprint,

	NULL
};
const int items_table_text_num = 9;

const char *items_table_hpgl[] = {
	kPPD_Items_Hgpl_blackplot,
	kPPD_Items_Hgpl_fitplot,
	kPPD_Items_Hgpl_penwidth,

	NULL
};
const int items_table_hpgl_num = 4;

#endif
