//
//  weiboMainVC.h
//  MedicalService
//
//  Created by 张琼芳 on 13-8-28.
//  Copyright (c) 2013年 www.fenghuait.cn  镇江风华信息科技有限公司. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface weiboMainVC : UIViewController{
    FLActivity *activity;
}
@property (weak, nonatomic) IBOutlet UIWebView *webView;

@property (nonatomic, copy)NSURL *weiboURL;
@end
