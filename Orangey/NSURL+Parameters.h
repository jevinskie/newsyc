//
//  NSURL+Parameters.h
//  Telekinesis
//
//  Created by Nicholas Jitkoff on 6/14/07.
//  Copyright 2007 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSURL (QSParameters) 
- (NSArray *)parameterArray;
- (NSDictionary *)parameterDictionary;
@end
