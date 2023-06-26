//
//  HNHotspotStatusModel.h
//  demo
//
//  Created by 东哥 on 2022/4/12.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface HNHotspotStatusModel : NSObject

/// 时间
@property (nonatomic , copy)NSString    *timestamp;

/// 状态
@property (nonatomic , copy)NSString    *online;


/// 高度
@property (nonatomic , assign)NSInteger  height;

@end

NS_ASSUME_NONNULL_END
