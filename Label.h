//
//  Label.h
//  Receipts
//
//  Created by RS on 6/05/15.
//  Copyright (c) 2015 RS. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

@class NSManagedObject;

@interface Label : NSManagedObject

@property (nonatomic, retain) NSString * labelName;
@property (nonatomic, retain) NSSet *receipt;
@end

@interface Label (CoreDataGeneratedAccessors)

- (void)addReceiptObject:(NSManagedObject *)value;
- (void)removeReceiptObject:(NSManagedObject *)value;
- (void)addReceipt:(NSSet *)values;
- (void)removeReceipt:(NSSet *)values;

@end
