//
//  ViewController.h
//  SoapWebServiceDemo
//
//  Created by Amogh Natu on 25/04/14.
//  Copyright (c) 2014 Amogh Natu. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController<NSXMLParserDelegate>

@property (weak, nonatomic) IBOutlet UILabel *resultLabel;

@property (weak, nonatomic) IBOutlet UITextField *celsiusText;
@end
