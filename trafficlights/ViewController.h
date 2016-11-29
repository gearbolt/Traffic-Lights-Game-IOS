//
//  ViewController.h
//  trafficlights
//
//  Created by Shaan Mirchanani on 10/22/16.
//  Copyright © 2016 Shaan Mirchanani. All rights reserved.
//

#import <UIKit/UIKit.h>
@interface ViewController : UIViewController {
 
    NSTimer *timer;
    NSTimer *scoreTimer;
    
    int timerInt;
    int scoreInt;
    
    
    
}
@property (strong, nonatomic) IBOutlet UIImageView *trafficLight;
@property (strong, nonatomic) IBOutlet UILabel *scoreLabel;
@property (strong, nonatomic) IBOutlet UIButton *startButton;



- (IBAction)startStop:(id)sender;


@end

