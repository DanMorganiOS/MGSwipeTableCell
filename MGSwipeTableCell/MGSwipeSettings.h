//
//  MGSwipeSettings.h
//
//  Created by Daniel Morgan on 12/5/14.
//  Copyright (c) 2014 Imanol Fernandez Gorostizaga. All rights reserved.
//

#ifndef MGSwipeDemo_MGSwipeSettings_h
#define MGSwipeDemo_MGSwipeSettings_h


/** Transition types */
typedef NS_ENUM(NSInteger, MGSwipeTransition) {
    MGSwipeTransitionBorder = 0,
    MGSwipeTransitionStatic,
    MGSwipeTransitionDrag,
    MGSwipeTransitionClipCenter,
    MGSwipeTransition3D,
};

/** Swipe directions */
typedef NS_ENUM(NSInteger, MGSwipeDirection) {
    MGSwipeDirectionLeftToRight = 0,
    MGSwipeDirectionRightToLeft
};

/** Swipe state */
typedef NS_ENUM(NSInteger, MGSwipeState) {
    MGSwipeStateNone = 0,
    MGSwipeStateSwippingLeftToRight,
    MGSwipeStateSwippingRightToLeft,
    MGSwipeStateExpandingLeftToRight,
    MGSwipeStateExpandingRightToLeft,
};

/**
 * Swipe settings
 **/
@interface MGSwipeSettings: NSObject
/** Transition used while swipping buttons */
@property (nonatomic, assign) MGSwipeTransition transition;
/** Size proportional threshold to hide/keep the buttons when the user ends swipping. Default value 0.5 */
@property (nonatomic, assign) CGFloat threshold;
/** Optional offset to change the swipe buttons position. Relative to the cell border position. Default value: 0
 ** For example it can be used to avoid cropped buttons when sectionIndexTitlesForTableView is used in the UITableView
 **/
@property (nonatomic, assign) CGFloat offset;

/** Property to read or change swipe animation durations. Default value 0.3 */
@property (nonatomic, assign) CGFloat animationDuration;

@end


/**
 * Expansion settings to make expandable buttons
 * Swipe button are not expandable by default
 **/
@interface MGSwipeExpansionSettings: NSObject
/** index of the expandable button (in the left or right buttons arrays) */
@property (nonatomic, assign) NSInteger buttonIndex;
/** if true the button fills the cell on trigger, else it bounces back to its initial position */
@property (nonatomic, assign) BOOL fillOnTrigger;
/** Size proportional threshold to trigger the expansion button. Default value 1.5 */
@property (nonatomic, assign) CGFloat threshold;

/** Property to read or change expansion animation durations. Default value 0.2
 * The target animation is the change of a button from normal state to expanded state
 */
@property (nonatomic, assign) CGFloat animationDuration;
@end


#endif
