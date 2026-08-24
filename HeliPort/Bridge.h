//
//  Bridge.h
//  AtherPort
//
//  Created by Bat.bat on 8/7/2024.
//  Copyright © 2024 OpenIntelWireless. All rights reserved.
//

#pragma once

// MARK: NSMenuItem Private API
#import <AppKit/AppKit.h>

@interface NSMenuItem ()
- (BOOL)_canBeHighlighted;
@end


// MARK: ath9k API
#include "../ClientKit/Api.h"
