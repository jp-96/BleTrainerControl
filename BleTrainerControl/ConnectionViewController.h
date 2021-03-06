//
//  ConnectionViewController.h
//  BleTrainerControl
//
//  Created by William Minol on 28/08/2015.
//  Copyright (c) 2015 Kinomap. All rights reserved.
//

#import <UIKit/UIKit.h>

#import <CoreBluetooth/CoreBluetooth.h>

#import "BasicResistanceViewController.h"
#import "TargetPowerViewController.h"
#import "WindResistanceViewController.h"
#import "TrackResistanceViewController.h"

#import "SpinDownCalibrationViewController.h"

@class AppDelegate;

@interface ConnectionViewController : UIViewController <UITableViewDelegate, UITableViewDataSource>
{
    AppDelegate *appDelegate;
    
    NSTimer *getDataTimer;
    
    CBPeripheral *peripheralSelected;
    
    IBOutlet UITableView *dataPagesTableView;
    
    IBOutlet UILabel *statusValueLabel;
    
    BOOL isDisplayingModalView;
    
    IBOutlet UIButton *basicResistanceButton;
    IBOutlet UIButton *targetPowerButton;
    IBOutlet UIButton *windResistanceButton;
    IBOutlet UIButton *trackResistanceButton;
    
    IBOutlet UIButton *calibrationButton;
    
    IBOutlet UIButton *requestPage54Button;
    IBOutlet UIButton *requestPage55Button;
}

@property (nonatomic, retain) CBPeripheral *peripheralSelected;


-(IBAction)onBasicResistance:(id)sender;
-(IBAction)onTargetPower:(id)sender;
-(IBAction)onWindResistance:(id)sender;
-(IBAction)onTrackResistance:(id)sender;

-(IBAction)onCalibration:(id)sender;


-(IBAction)requestPage54:(id)sender;
-(IBAction)requestPage55:(id)sender;

@end
