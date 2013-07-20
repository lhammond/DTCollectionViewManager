//
//  DTCollectionViewController.h
//  DTCollectionViewManager
//
//  Created by Denys Telezhkin on 1/23/13.
//  Copyright (c) 2013 MLSDev. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "DTCollectionViewModelTransfer.h"

@interface DTCollectionViewController : UIViewController <UICollectionViewDataSource>

@property (nonatomic,retain) IBOutlet UICollectionView * collectionView;

-(NSMutableArray *)itemsArrayForSection:(int)index;

-(NSMutableArray *)sectionsArray;

- (void)registerClass:(Class)reusableViewClass forSupplementaryViewOfKind:(NSString *)kind
                                                      withReuseIdentifier:(NSString *)identifier;

- (void)registerNib:(UINib*)nib forSupplementaryViewOfKind:(NSString *)kind
                                       withReuseIdentifier:(NSString *)identifier;


- (void)registerClass:(Class)reusableCellClass forCellReuseIdentifier:(NSString *)identifier
        forModelClass:(Class)modelClass;
- (void)registerNib:(UINib *)nib forCellReuseIdentifier:(NSString *)identifier
      forModelClass:(Class)modelClass;


@property (nonatomic,retain,readonly) NSMutableDictionary * reuseIdentifiersForSupplementaryViews;
@property (nonatomic,retain,readonly) NSMutableDictionary * reuseIdentifiersForCellModels;

@property (nonatomic,retain) NSMutableArray * headerModels;
@property (nonatomic,retain) NSMutableArray * footerModels;

@end