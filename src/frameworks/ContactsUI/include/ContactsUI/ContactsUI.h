/*
 This file is part of Darling.

 Copyright (C) 2019 Lubos Dolezel

 Darling is free software: you can redistribute it and/or modify
 it under the terms of the GNU General Public License as published by
 the Free Software Foundation, either version 3 of the License, or
 (at your option) any later version.

 Darling is distributed in the hope that it will be useful,
 but WITHOUT ANY WARRANTY; without even the implied warranty of
 MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 GNU General Public License for more details.

 You should have received a copy of the GNU General Public License
 along with Darling.  If not, see <http://www.gnu.org/licenses/>.
*/


#ifndef _ContactsUI_H_
#define _ContactsUI_H_

#import <Foundation/Foundation.h>

#import <ContactsUI/ABCNPickerGroupCellView.h>
#import <ContactsUI/ABCardCollectionViewControllerDelegate.h>
#import <ContactsUI/ABCardCollectionViewDataSource.h>
#import <ContactsUI/ABCardCollectionViewDelegate.h>
#import <ContactsUI/ABCardViewDataSourceDelegate.h>
#import <ContactsUI/ABCardViewDelegate.h>
#import <ContactsUI/ABGroupDropHelper.h>
#import <ContactsUI/ABGroupHelperFactory.h>
#import <ContactsUI/ABGroupListRowView.h>
#import <ContactsUI/ABGroupSelectHelper.h>
#import <ContactsUI/ABNameViewDelegate.h>
#import <ContactsUI/ABPersonListControllerProtocol.h>
#import <ContactsUI/ABPersonSearchControllerDelegate.h>
#import <ContactsUI/ABPersonViewClientProtocol.h>
#import <ContactsUI/ABPersonViewProtocol.h>
#import <ContactsUI/AKCardViewDataSourceSupport.h>
#import <ContactsUI/CNAddFieldTouchBarDelegate.h>
#import <ContactsUI/CNAvatarCacheChangeListenerDelegate.h>
#import <ContactsUI/CNAvatarCacheDelegate.h>
#import <ContactsUI/CNAvatarEditorDelegate.h>
#import <ContactsUI/CNAvatarEditorViewControllerSettings.h>
#import <ContactsUI/CNAvatarImageRenderingScope.h>
#import <ContactsUI/CNAvatarImageRenderingScopeInternal.h>
#import <ContactsUI/CNAvatarUpdating.h>
#import <ContactsUI/CNAvatarViewDelegate.h>
#import <ContactsUI/CNChangeHistoryEventVisitor.h>
#import <ContactsUI/CNContactCardViewControllerAction.h>
#import <ContactsUI/CNContactCardViewControllerLogger.h>
#import <ContactsUI/CNContactCardWidget.h>
#import <ContactsUI/CNContactCardWidgetProviderDelegate.h>
#import <ContactsUI/CNContactDetailsViewControllerDelegate.h>
#import <ContactsUI/CNContactEditViewTouchBarDelegate.h>
#import <ContactsUI/CNContactEditingInterfaceElement.h>
#import <ContactsUI/CNContactIconUpdating.h>
#import <ContactsUI/CNContactLikenessMutator.h>
#import <ContactsUI/CNContactLikenessMutatorFactory.h>
#import <ContactsUI/CNContactLikenessesFetchStrategy.h>
#import <ContactsUI/CNContactLikenessesFetchStrategyFactory.h>
#import <ContactsUI/CNContactListCellViewControllerDelegate.h>
#import <ContactsUI/CNContactListControllerDelegate.h>
#import <ContactsUI/CNContactListSelectHelper.h>
#import <ContactsUI/CNContactNameViewControllerDelegate.h>
#import <ContactsUI/CNContactPickerInternalResponseDelegate.h>
#import <ContactsUI/CNContactPickerInternalSetup.h>
#import <ContactsUI/CNContactPickerViewController.h>
#import <ContactsUI/CNContactPickerViewControllerSearch.h>
#import <ContactsUI/CNContactViewTouchBarDelegate.h>
#import <ContactsUI/CNEditAuthorizationViewControllerDelegate.h>
#import <ContactsUI/CNFamilyMemberEditControlsViewControllerDelegate.h>
#import <ContactsUI/CNFamilyMemberWhitelistedContactViewCellDelegate.h>
#import <ContactsUI/CNLikenessEditorHostDelegate.h>
#import <ContactsUI/CNLikenessEditorPresentationStrategy.h>
#import <ContactsUI/CNPhotoLikenessEditorCameraViewDelegate.h>
#import <ContactsUI/CNPhotoLikenessEditorCroppingDataSource.h>
#import <ContactsUI/CNPhotoLikenessEditorZoomDelegate.h>
#import <ContactsUI/CNPhotoLikenessSource.h>
#import <ContactsUI/CNRecentLikenessesDataSource.h>
#import <ContactsUI/CNRecentLikenessesViewDelegate.h>
#import <ContactsUI/CNUICoreFamilyMemberContactsObserver.h>
#import <ContactsUI/CNUIShareKitTransitionProvider.h>
#import <ContactsUI/CNUIUserActionListConsumer.h>
#import <ContactsUI/CNUIUserActionListConsumerDelegate.h>
#import <ContactsUI/NSAccessibilityButton.h>
#import <ContactsUI/NSAccessibilityElement.h>
#import <ContactsUI/NSAccessibilityGroup.h>
#import <ContactsUI/NSCollectionViewDataSource.h>
#import <ContactsUI/NSCollectionViewDelegate.h>
#import <ContactsUI/NSControlTextEditingDelegate.h>
#import <ContactsUI/NSDraggingDestination.h>
#import <ContactsUI/NSGestureRecognizerDelegate.h>
#import <ContactsUI/NSImmediateActionGestureRecognizerDelegate.h>
#import <ContactsUI/NSMenuDelegate.h>
#import <ContactsUI/NSOutlineViewDataSource.h>
#import <ContactsUI/NSOutlineViewDelegate.h>
#import <ContactsUI/NSPasteboardWriting.h>
#import <ContactsUI/NSPopoverDelegate.h>
#import <ContactsUI/NSSharingServiceDelegate.h>
#import <ContactsUI/NSSharingServicePickerDelegate.h>
#import <ContactsUI/NSSharingServicePickerTouchBarItemDelegate.h>
#import <ContactsUI/NSTableViewDataSource.h>
#import <ContactsUI/NSTableViewDelegate.h>
#import <ContactsUI/NSTextFieldDelegate.h>
#import <ContactsUI/NSTouchBarProvider.h>
#import <ContactsUI/QLPreviewMenuItemDelegate.h>
#import <ContactsUI/CNContactViewTouchBar.h>
#import <ContactsUI/CNAvatarCacheDelegateObservable.h>
#import <ContactsUI/CNUIColorButton.h>
#import <ContactsUI/CNContactListView.h>
#import <ContactsUI/CNBadgingAvatarViewController.h>
#import <ContactsUI/CNLikenessSorter.h>
#import <ContactsUI/CNContactLikenessesAggregateFetchStrategy.h>
#import <ContactsUI/CNEditAuthorizationViewController.h>
#import <ContactsUI/CNDelegateRetainingEditAuthorizationViewController.h>
#import <ContactsUI/CNContactPicker.h>
#import <ContactsUI/CNUISavePanel.h>
#import <ContactsUI/CNAvatarImageLoadingOptions.h>
#import <ContactsUI/CNUserActionTouchBar.h>
#import <ContactsUI/CNOccluderView.h>
#import <ContactsUI/CNLikenessEditorPresentationController.h>
#import <ContactsUI/CNUIColoredView.h>
#import <ContactsUI/CNContactLikenessCardMutatorFactory.h>
#import <ContactsUI/CNAvatarView.h>
#import <ContactsUI/CNContactCardWidgetProvider.h>
#import <ContactsUI/ABPersonListSearchControllerUsageStatisticsHelper.h>
#import <ContactsUI/CNAvatarCacheEntry.h>
#import <ContactsUI/CNAvatarViewModel.h>
#import <ContactsUI/CNPhotoLikenessEditorMediaLibraryViewController.h>
#import <ContactsUI/CNContactListController.h>
#import <ContactsUI/CNContactListCellView.h>
#import <ContactsUI/CNContactListCountCellView.h>
#import <ContactsUI/CNUIScreen.h>
#import <ContactsUI/CNRecentLikenessesBackendDataSource.h>
#import <ContactsUI/CNContactPersistenceHelper.h>
#import <ContactsUI/CNContactActionsDisambiguationMenuGenerator.h>
#import <ContactsUI/CNContactListCellViewController.h>
#import <ContactsUI/CNQuickActionButton.h>
#import <ContactsUI/CNContactPickerViewService.h>
#import <ContactsUI/CNDefaultPhotoBrowserItem.h>
#import <ContactsUI/CNPhotoLikenessDefaultLibraryView.h>
#import <ContactsUI/CNContactCardViewControlContext.h>
#import <ContactsUI/CNContactLikenessContactStoreMutator.h>
#import <ContactsUI/CNContactListHeaderCellView.h>
#import <ContactsUI/CNContactPickerView.h>
#import <ContactsUI/CNUIColorRepository.h>
#import <ContactsUI/CNContactPickerViewMetrics.h>
#import <ContactsUI/CNBadgeViewController.h>
#import <ContactsUI/CNContactListShowSelectedContactHelper.h>
#import <ContactsUI/CNScrollableContainerView.h>
#import <ContactsUI/CNContactPickerViewLayout.h>
#import <ContactsUI/CNGroupListView.h>
#import <ContactsUI/CNContactPickerFamilyMemberScope.h>
#import <ContactsUI/CNContactIconViewModel.h>
#import <ContactsUI/CNContactPickerXPCRelay.h>
#import <ContactsUI/CNContactUpdatesReflector.h>
#import <ContactsUI/CNContactCardWidgetProviderDelegateWrapper.h>
#import <ContactsUI/CNDefaultQuickActionsEnvironment.h>
#import <ContactsUI/CNGroupListController.h>
#import <ContactsUI/CNContactActionsGroupGenerator.h>
#import <ContactsUI/CNLikenessSelectionView.h>
#import <ContactsUI/CNLikenessCollectionItem.h>
#import <ContactsUI/CNContactListRowView.h>
#import <ContactsUI/CNContactPickerBorderView.h>
#import <ContactsUI/CNLikenessCircleView.h>
#import <ContactsUI/CNLikenessEmptyCollectionItem.h>
#import <ContactsUI/CNContactLikenessesModel.h>
#import <ContactsUI/CNAvatarEditOverlayView.h>
#import <ContactsUI/CNContactPickerGroupHelperFactory.h>
#import <ContactsUI/CNContactPickerGroupDropHelper.h>
#import <ContactsUI/CNCameraChangeWatcher.h>
#import <ContactsUI/CNFamilyMemberContactsViewController.h>
#import <ContactsUI/CNContactPickerScope.h>
#import <ContactsUI/CNPhotoLikenessZoomSliderCell.h>
#import <ContactsUI/CNFamilyMemberContactsShared.h>
#import <ContactsUI/CNUIEditingRules.h>
#import <ContactsUI/CNContactListHelperFactory.h>
#import <ContactsUI/CNContactLikenessPersonaStoreOriginalLikenessMutator.h>
#import <ContactsUI/CNContactListSelectValueHelper.h>
#import <ContactsUI/CNPhotoLikenessMediaObjectBrowserItem.h>
#import <ContactsUI/CNContactListHelperScope.h>
#import <ContactsUI/CNContactAvatarViewController.h>
#import <ContactsUI/CNAvatarImageLoading.h>
#import <ContactsUI/CNContactActionsView.h>
#import <ContactsUI/CNContactListSelectHelper.h>
#import <ContactsUI/CNPickerGroupHeaderCellView.h>
#import <ContactsUI/CNAvatarViewController.h>
#import <ContactsUI/CNVariableChangeHelper.h>
#import <ContactsUI/CNFamilyMemberEditControlsViewController.h>
#import <ContactsUI/CNFamilyMemberWhitelistedContactViewCell.h>
#import <ContactsUI/CNLikenessConverter.h>
#import <ContactsUI/CNContactIconView.h>
#import <ContactsUI/CNLikenessEditorPresentationPopoverStrategy.h>
#import <ContactsUI/CNCollectionViewTouchBar.h>
#import <ContactsUI/CNContactListValueHelperScope.h>
#import <ContactsUI/CNContactDetailsViewController.h>
#import <ContactsUI/CNContactEditViewTouchBar.h>
#import <ContactsUI/CNContactSilhouetteView.h>
#import <ContactsUI/CNContactCardViewControllerABPersonViewMediator.h>
#import <ContactsUI/CNLikeness.h>
#import <ContactsUI/CNUIContactFetchResult.h>
#import <ContactsUI/CNContactCardViewControllerOnLaunchContactFetcher.h>
#import <ContactsUI/CNContactCardViewControllerAfterLaunchContactFetcher.h>
#import <ContactsUI/CNContactCardViewControllerContactFetcher.h>
#import <ContactsUI/CNContactPickerViewController.h>
#import <ContactsUI/CNContactIconImageFactory.h>
#import <ContactsUI/CNPhotoLikenessDefaultLibraryViewController.h>
#import <ContactsUI/CNGroupListBrowsingSelectHelper.h>
#import <ContactsUI/CNGroupListSearchingSelectHelper.h>
#import <ContactsUI/CNPhotoLikenessEditorCroppingViewController.h>
#import <ContactsUI/CNContactViewController.h>
#import <ContactsUI/_CNUIStandardEditingPolicy.h>
#import <ContactsUI/_CNUIGuardianEditingPolicy.h>
#import <ContactsUI/CNUIEditingPolicy.h>
#import <ContactsUI/CNContactNameViewController.h>
#import <ContactsUI/CNLikenessFullCollectionItem.h>
#import <ContactsUI/CNCreateLikenessHelper.h>
#import <ContactsUI/CNContactLikenessImageFetchStrategy.h>
#import <ContactsUI/CNLikenessEditorBuddyController.h>
#import <ContactsUI/CNAvatarImageRenderingScope.h>
#import <ContactsUI/CNPhotoLikenessEditorUtils.h>
#import <ContactsUI/CNUIVCardNameGenerator.h>
#import <ContactsUI/CNContactPickerSearchController.h>
#import <ContactsUI/CNContactActionsViewController.h>
#import <ContactsUI/CNAvatarCache.h>
#import <ContactsUI/CNAvatarImageRenderer.h>
#import <ContactsUI/CNContactLikenessesPersonaStoreFetchStrategy.h>
#import <ContactsUI/CNUIContactFetchParameters.h>
#import <ContactsUI/CNFamilyMemberWhitelistedContactsViewController.h>
#import <ContactsUI/CNRecentLikenessesDataSourceDelayedEditDecorator.h>
#import <ContactsUI/CNUIDeprecatedIKImageBrowserView.h>
#import <ContactsUI/CNUIViewRevealer.h>
#import <ContactsUI/CNView.h>
#import <ContactsUI/CNGroupListEntriesFactory.h>
#import <ContactsUI/CNUIVCardSharingItem.h>
#import <ContactsUI/CNGroupListCellView.h>
#import <ContactsUI/CNPhotoLikenessImageBrowserCell.h>
#import <ContactsUI/CNPhotoLikenessMediaLibraryView.h>
#import <ContactsUI/CNContactCardViewControllerLogger.h>
#import <ContactsUI/CNGroupListRowView.h>
#import <ContactsUI/CNContactAvatarNameCompositeViewController.h>
#import <ContactsUI/CNContactPickerRemoteViewController.h>
#import <ContactsUI/CNContactTabSwitcherViewController.h>
#import <ContactsUI/CNGroupListBackgroundView.h>
#import <ContactsUI/CNContactLikenessABCardViewImageDataSourceMutator.h>
#import <ContactsUI/CNRecentLikenessesCollectionView.h>
#import <ContactsUI/CNRecentLikenessesViewController.h>
#import <ContactsUI/CNTouchBarUtilities.h>
#import <ContactsUI/CNContactPickerService.h>
#import <ContactsUI/CNFromABCNConversions.h>
#import <ContactsUI/CNUIColorPalette.h>
#import <ContactsUI/CNAvatarCacheChangeListener.h>
#import <ContactsUI/CNPhotoLikenessEditorViewController.h>
#import <ContactsUI/CNContactLikenessPersonaStoreMutator.h>
#import <ContactsUI/CNContactCardViewController.h>
#import <ContactsUI/ABCNContactShortNameFormatter.h>
#import <ContactsUI/CNTabSegmentedControl.h>
#import <ContactsUI/CNPhotoLikenessBuddyControlsViewController.h>
#import <ContactsUI/CNAvatarEditorViewController.h>
#import <ContactsUI/CNFunctionBarController.h>
#import <ContactsUI/CNPhotoLikenessEditorZoomSliderController.h>
#import <ContactsUI/CNQuickActionViewClickHelper.h>
#import <ContactsUI/CNTouchBarController.h>
#import <ContactsUI/CNPhotoLikenessEditorCameraView.h>
#import <ContactsUI/_CNCameraSessionState.h>
#import <ContactsUI/CNPhotoLikenessEditorCameraViewController.h>
#import <ContactsUI/CNToABCNConversions.h>
#import <ContactsUI/ABCNContactNameFormatter.h>
#import <ContactsUI/CNLikenessInspector.h>
#import <ContactsUI/CNControlClickGestureRecognizer.h>
#import <ContactsUI/_CNObservableTargetActionHelper.h>
#import <ContactsUI/CNPhotoLikenessMaskView.h>
#import <ContactsUI/CNPhotoLikenessSourceTable.h>
#import <ContactsUI/CNPhotoLikenessEditorView.h>
#import <ContactsUI/CNGroupListSectionSelectHelper.h>
#import <ContactsUI/CNAddFieldTouchBar.h>
#import <ContactsUI/CNResettingScrollViewController.h>
#import <ContactsUI/CNContactCardViewControllerDataSourceDelegate.h>
#import <ContactsUI/CNContactPickerNotificationWatcher.h>
#import <ContactsUI/CNLikenessEditorViewController.h>
#import <ContactsUI/CNContactLikenessView.h>
#import <ContactsUI/CNContactSaveAction.h>
#import <ContactsUI/CNTransaction.h>
#import <ContactsUI/CNContactIconAppearance.h>
#import <ContactsUI/CNContactLikenessAgreggateMutator.h>
#import <ContactsUI/CNAvatarCacheChangeHistoryAnalysisTask.h>
#import <ContactsUI/CNAvatarChangeHistoryReportingTask.h>
#import <ContactsUI/CNAvatarCacheChangeAnalysis.h>
#import <ContactsUI/CNContactPickerInProccessViewController.h>
#import <ContactsUI/CNContactLikenessLinkedContactsFetchStrategy.h>
#import <ContactsUI/CNPhotoLikenessInternalSource.h>
#import <ContactsUI/CNPhotoLikenessCameraSource.h>
#import <ContactsUI/CNPhotoLikenessDefaultsSource.h>
#import <ContactsUI/CNPhotoLikenessPhotosSource.h>
#import <ContactsUI/CNPhotoLikenessIPhotoSource.h>
#import <ContactsUI/CNPhotoLikenessPhotoBoothSource.h>
#import <ContactsUI/CNPhotoLikenessCurrentSource.h>
#import <ContactsUI/CNContactPickerDelegateSearchConfiguration.h>
#import <ContactsUI/CNUIEnvironment.h>
#import <ContactsUI/CNUIMutableEnvironment.h>
#import <ContactsUI/CNContactLikenessDefaultMutatorFactory.h>
#import <ContactsUI/CNContactSharingEnabledWarningViewController.h>
#import <ContactsUI/CNUIDefaultPhotosLoader.h>
#import <ContactsUI/CNIntrinsicView.h>
#import <ContactsUI/CNFlippedClipView.h>
#import <ContactsUI/CNAntialiasedImageView.h>
#import <ContactsUI/CNRoundedImageView.h>
#import <ContactsUI/CNViewFactory.h>
#import <ContactsUI/CNContactCardHeightCalculator.h>
#import <ContactsUI/CNContactPickerCardViewStyleProvider.h>
#import <ContactsUI/CNContactPickerSection.h>
#import <ContactsUI/CNRecentLikenessesDiff.h>
#import <ContactsUI/CNScrollViewOccluderController.h>
#import <ContactsUI/CNAvatarCacheFingerprintCollector.h>
#import <ContactsUI/CNQuickActionView.h>
#import <ContactsUI/CNContactPickerUsageTracer.h>
#import <ContactsUI/CNIntegerFormatter.h>
#import <ContactsUI/CNPhotoLikenessZoomSlider.h>
#import <ContactsUI/CNPhotoLikenessEditorCroppingView.h>
#import <ContactsUI/CNContactLikenessPickerViewController.h>
#import <ContactsUI/CNContactCardViewControllerWidgetProviderDelegate.h>
#import <ContactsUI/CNLikenessEditorPresentationSheetStrategy.h>
#import <ContactsUI/CNContactLikenessesFetchStrategyDefaultFactory.h>
#import <ContactsUI/CNUIVCardSharingTask.h>

void* CNUIDebugLoggingEnabled(void);
void* CNUILoggingContextDebug(void);
void* CNUILoggingContextPerformance(void);
void* CNUILoggingSubsystem(void);
void* CNUIPerformanceLoggingEnabled(void);
void* sharedSessionQueue(void);

#endif
