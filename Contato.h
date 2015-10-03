//
//  Contato.h
//  
//
//  Created by ios5380 on 03/10/15.
//
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>


@interface Contato : NSManagedObject

@property (nonatomic, retain) NSString * nome;
@property (nonatomic, retain) NSString * email;
@property (nonatomic, retain) NSString * endereco;
@property (nonatomic, retain) NSString * telefone;
@property (nonatomic, retain) NSNumber * latitude;
@property (nonatomic, retain) NSNumber * longitude;
@property (nonatomic, retain) id foto;

@end
