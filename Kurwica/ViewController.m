//
//  ViewController.m
//  Kurwica
//
//  Created by Piotr Mlynarski on 12.02.2015.
//  Copyright (c) 2015 Piotr Mlynarski. All rights reserved.
//

#import "ViewController.h"
#import "AppDelegate.h"

@interface ViewController ()
@property AppDelegate *mydlo;

@end

@implementation ViewController
- (IBAction)Gazownia:(id)sender {
    _mydlo = [[AppDelegate alloc] init];
    [_mydlo aSprobujKurwaNieDodacEncji];
    //[_mydlo jakNieWypiszeszToWRyj];
    NSLog(@"Baza wirusow Avast zostala zaktualizowana xD");
}

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view, typically from a nib.
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

@end
