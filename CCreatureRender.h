//
//  CCreatureRender.h
//  Untitled
//
//  Created by Jiayi Chong on 3/29/15.
//  Copyright (c) 2015 Apportable. All rights reserved.
//

#import "CCNode.h"
#import "CCProtocols.h"
#include <iostream>
#include <memory>
#include "CreatureModule.h"

@interface CCreatureRender : CCNode<CCShaderProtocol, CCTextureProtocol>
{
    
}

-(id)initWithData:(CreatureModule::CreatureManager *) managerIn andTexture:(CCTexture *) textureIn;
@property (nonatomic, setter=setAnimation:, getter=getAnimation) NSString* animation;
@property (nonatomic, setter=setIsPlaying:, getter=getIsPlaying) BOOL isPlaying;

@property (nonatomic) CreatureModule::CreatureManager * manager;

@end
