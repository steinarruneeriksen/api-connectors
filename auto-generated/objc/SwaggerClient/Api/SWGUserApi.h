#import <Foundation/Foundation.h>
#import "SWGAccessToken.h"
#import "SWGAffiliate.h"
#import "SWGCommunicationToken.h"
#import "SWGError.h"
#import "SWGMargin.h"
#import "SWGQuoteFillRatio.h"
#import "SWGTransaction.h"
#import "SWGUser.h"
#import "SWGUserCommissionsBySymbol.h"
#import "SWGWallet.h"
#import "SWGApi.h"

/**
* BitMEX API
* ## REST API for the BitMEX Trading Platform  [View Changelog](/app/apiChangelog)  -  #### Getting Started  Base URI: [https://www.bitmex.com/api/v1](/api/v1)  ##### Fetching Data  All REST endpoints are documented below. You can try out any query right from this interface.  Most table queries accept `count`, `start`, and `reverse` params. Set `reverse=true` to get rows newest-first.  Additional documentation regarding filters, timestamps, and authentication is available in [the main API documentation](/app/restAPI).  _All_ table data is available via the [Websocket](/app/wsAPI). We highly recommend using the socket if you want to have the quickest possible data without being subject to ratelimits.  ##### Return Types  By default, all data is returned as JSON. Send `?_format=csv` to get CSV data or `?_format=xml` to get XML data.  ##### Trade Data Queries  _This is only a small subset of what is available, to get you started._  Fill in the parameters and click the `Try it out!` button to try any of these queries.  - [Pricing Data](#!/Quote/Quote_get)  - [Trade Data](#!/Trade/Trade_get)  - [OrderBook Data](#!/OrderBook/OrderBook_getL2)  - [Settlement Data](#!/Settlement/Settlement_get)  - [Exchange Statistics](#!/Stats/Stats_history)  Every function of the BitMEX.com platform is exposed here and documented. Many more functions are available.  ##### Swagger Specification  [⇩ Download Swagger JSON](swagger.json)  -  ## All API Endpoints  Click to expand a section. 
*
* OpenAPI spec version: 1.2.0
* Contact: support@bitmex.com
*
* NOTE: This class is auto generated by the swagger code generator program.
* https://github.com/swagger-api/swagger-codegen.git
* Do not edit the class manually.
*/



@interface SWGUserApi: NSObject <SWGApi>

extern NSString* kSWGUserApiErrorDomain;
extern NSInteger kSWGUserApiMissingParamErrorCode;

-(instancetype) initWithApiClient:(SWGApiClient *)apiClient NS_DESIGNATED_INITIALIZER;

/// Cancel a withdrawal.
/// 
///
/// @param token 
/// 
///  code:200 message:"Request was successful",
///  code:400 message:"Parameter Error",
///  code:401 message:"Unauthorized",
///  code:403 message:"Access Denied",
///  code:404 message:"Not Found"
///
/// @return SWGTransaction*
-(NSURLSessionTask*) userCancelWithdrawalWithToken: (NSString*) token
    completionHandler: (void (^)(SWGTransaction* output, NSError* error)) handler;


/// Check if a referral code is valid.
/// If the code is valid, responds with the referral code's discount (e.g. `0.1` for 10%). Otherwise, will return a 404 or 451 if invalid.
///
/// @param referralCode  (optional)
/// 
///  code:200 message:"Request was successful",
///  code:400 message:"Parameter Error",
///  code:401 message:"Unauthorized",
///  code:403 message:"Access Denied",
///  code:404 message:"Not Found"
///
/// @return NSNumber*
-(NSURLSessionTask*) userCheckReferralCodeWithReferralCode: (NSString*) referralCode
    completionHandler: (void (^)(NSNumber* output, NSError* error)) handler;


/// Register your communication token for mobile clients
/// 
///
/// @param token 
/// @param platformAgent 
/// 
///  code:200 message:"Request was successful",
///  code:400 message:"Parameter Error",
///  code:401 message:"Unauthorized",
///  code:403 message:"Access Denied",
///  code:404 message:"Not Found"
///
/// @return NSArray<SWGCommunicationToken>*
-(NSURLSessionTask*) userCommunicationTokenWithToken: (NSString*) token
    platformAgent: (NSString*) platformAgent
    completionHandler: (void (^)(NSArray<SWGCommunicationToken>* output, NSError* error)) handler;


/// Confirm your email address with a token.
/// 
///
/// @param token 
/// 
///  code:200 message:"Request was successful",
///  code:400 message:"Parameter Error",
///  code:401 message:"Unauthorized",
///  code:403 message:"Access Denied",
///  code:404 message:"Not Found"
///
/// @return SWGAccessToken*
-(NSURLSessionTask*) userConfirmWithToken: (NSString*) token
    completionHandler: (void (^)(SWGAccessToken* output, NSError* error)) handler;


/// Confirm a withdrawal.
/// 
///
/// @param token 
/// 
///  code:200 message:"Request was successful",
///  code:400 message:"Parameter Error",
///  code:401 message:"Unauthorized",
///  code:403 message:"Access Denied",
///  code:404 message:"Not Found"
///
/// @return SWGTransaction*
-(NSURLSessionTask*) userConfirmWithdrawalWithToken: (NSString*) token
    completionHandler: (void (^)(SWGTransaction* output, NSError* error)) handler;


/// Get your user model.
/// 
///
/// 
///  code:200 message:"Request was successful",
///  code:400 message:"Parameter Error",
///  code:401 message:"Unauthorized",
///  code:403 message:"Access Denied",
///  code:404 message:"Not Found"
///
/// @return SWGUser*
-(NSURLSessionTask*) userGetWithCompletionHandler: 
    (void (^)(SWGUser* output, NSError* error)) handler;


/// Get your current affiliate/referral status.
/// 
///
/// 
///  code:200 message:"Request was successful",
///  code:400 message:"Parameter Error",
///  code:401 message:"Unauthorized",
///  code:403 message:"Access Denied",
///  code:404 message:"Not Found"
///
/// @return SWGAffiliate*
-(NSURLSessionTask*) userGetAffiliateStatusWithCompletionHandler: 
    (void (^)(SWGAffiliate* output, NSError* error)) handler;


/// Get your account's commission status.
/// 
///
/// 
///  code:200 message:"Request was successful",
///  code:400 message:"Parameter Error",
///  code:401 message:"Unauthorized",
///  code:403 message:"Access Denied",
///  code:404 message:"Not Found"
///
/// @return SWGUserCommissionsBySymbol*
-(NSURLSessionTask*) userGetCommissionWithCompletionHandler: 
    (void (^)(SWGUserCommissionsBySymbol* output, NSError* error)) handler;


/// Get a deposit address.
/// 
///
/// @param currency  (optional) (default to XBt)
/// 
///  code:200 message:"Request was successful",
///  code:400 message:"Parameter Error",
///  code:401 message:"Unauthorized",
///  code:403 message:"Access Denied",
///  code:404 message:"Not Found"
///
/// @return NSString*
-(NSURLSessionTask*) userGetDepositAddressWithCurrency: (NSString*) currency
    completionHandler: (void (^)(NSString* output, NSError* error)) handler;


/// Get the execution history by day.
/// 
///
/// @param symbol  (default to XBTUSD)
/// @param timestamp  (default to 2017-02-13T12:00:00.000Z)
/// 
///  code:200 message:"Request was successful",
///  code:400 message:"Parameter Error",
///  code:401 message:"Unauthorized",
///  code:403 message:"Access Denied",
///  code:404 message:"Not Found"
///
/// @return NSObject*
-(NSURLSessionTask*) userGetExecutionHistoryWithSymbol: (NSString*) symbol
    timestamp: (NSDate*) timestamp
    completionHandler: (void (^)(NSObject* output, NSError* error)) handler;


/// Get your account's margin status. Send a currency of \"all\" to receive an array of all supported currencies.
/// 
///
/// @param currency  (optional) (default to XBt)
/// 
///  code:200 message:"Request was successful",
///  code:400 message:"Parameter Error",
///  code:401 message:"Unauthorized",
///  code:403 message:"Access Denied",
///  code:404 message:"Not Found"
///
/// @return SWGMargin*
-(NSURLSessionTask*) userGetMarginWithCurrency: (NSString*) currency
    completionHandler: (void (^)(SWGMargin* output, NSError* error)) handler;


/// Get 7 days worth of Quote Fill Ratio statistics.
/// 
///
/// 
///  code:200 message:"Request was successful",
///  code:400 message:"Parameter Error",
///  code:401 message:"Unauthorized",
///  code:403 message:"Access Denied",
///  code:404 message:"Not Found"
///
/// @return SWGQuoteFillRatio*
-(NSURLSessionTask*) userGetQuoteFillRatioWithCompletionHandler: 
    (void (^)(SWGQuoteFillRatio* output, NSError* error)) handler;


/// Get your current wallet information.
/// 
///
/// @param currency  (optional) (default to XBt)
/// 
///  code:200 message:"Request was successful",
///  code:400 message:"Parameter Error",
///  code:401 message:"Unauthorized",
///  code:403 message:"Access Denied",
///  code:404 message:"Not Found"
///
/// @return SWGWallet*
-(NSURLSessionTask*) userGetWalletWithCurrency: (NSString*) currency
    completionHandler: (void (^)(SWGWallet* output, NSError* error)) handler;


/// Get a history of all of your wallet transactions (deposits, withdrawals, PNL).
/// 
///
/// @param currency  (optional) (default to XBt)
/// @param count Number of results to fetch. (optional) (default to 100)
/// @param start Starting point for results. (optional) (default to 0)
/// 
///  code:200 message:"Request was successful",
///  code:400 message:"Parameter Error",
///  code:401 message:"Unauthorized",
///  code:403 message:"Access Denied",
///  code:404 message:"Not Found"
///
/// @return NSArray<SWGTransaction>*
-(NSURLSessionTask*) userGetWalletHistoryWithCurrency: (NSString*) currency
    count: (NSNumber*) count
    start: (NSNumber*) start
    completionHandler: (void (^)(NSArray<SWGTransaction>* output, NSError* error)) handler;


/// Get a summary of all of your wallet transactions (deposits, withdrawals, PNL).
/// 
///
/// @param currency  (optional) (default to XBt)
/// 
///  code:200 message:"Request was successful",
///  code:400 message:"Parameter Error",
///  code:401 message:"Unauthorized",
///  code:403 message:"Access Denied",
///  code:404 message:"Not Found"
///
/// @return NSArray<SWGTransaction>*
-(NSURLSessionTask*) userGetWalletSummaryWithCurrency: (NSString*) currency
    completionHandler: (void (^)(NSArray<SWGTransaction>* output, NSError* error)) handler;


/// Log out of BitMEX.
/// 
///
/// 
///  code:200 message:"Request was successful",
///  code:400 message:"Parameter Error",
///  code:401 message:"Unauthorized",
///  code:403 message:"Access Denied",
///  code:404 message:"Not Found"
///
/// @return void
-(NSURLSessionTask*) userLogoutWithCompletionHandler: 
    (void (^)(NSError* error)) handler;


/// Get the minimum withdrawal fee for a currency.
/// This is changed based on network conditions to ensure timely withdrawals. During network congestion, this may be high. The fee is returned in the same currency.
///
/// @param currency  (optional) (default to XBt)
/// 
///  code:200 message:"Request was successful",
///  code:400 message:"Parameter Error",
///  code:401 message:"Unauthorized",
///  code:403 message:"Access Denied",
///  code:404 message:"Not Found"
///
/// @return NSObject*
-(NSURLSessionTask*) userMinWithdrawalFeeWithCurrency: (NSString*) currency
    completionHandler: (void (^)(NSObject* output, NSError* error)) handler;


/// Request a withdrawal to an external wallet.
/// This will send a confirmation email to the email address on record.
///
/// @param currency Currency you&#39;re withdrawing. Options: &#x60;XBt&#x60; (default to XBt)
/// @param amount Amount of withdrawal currency.
/// @param address Destination Address.
/// @param otpToken 2FA token. Required if 2FA is enabled on your account. (optional)
/// @param fee Network fee for Bitcoin withdrawals. If not specified, a default value will be calculated based on Bitcoin network conditions. You will have a chance to confirm this via email. (optional)
/// @param text Optional annotation, e.g. &#39;Transfer to home wallet&#39;. (optional)
/// 
///  code:200 message:"Request was successful",
///  code:400 message:"Parameter Error",
///  code:401 message:"Unauthorized",
///  code:403 message:"Access Denied",
///  code:404 message:"Not Found"
///
/// @return SWGTransaction*
-(NSURLSessionTask*) userRequestWithdrawalWithCurrency: (NSString*) currency
    amount: (NSNumber*) amount
    address: (NSString*) address
    otpToken: (NSString*) otpToken
    fee: (NSNumber*) fee
    text: (NSString*) text
    completionHandler: (void (^)(SWGTransaction* output, NSError* error)) handler;


/// Save user preferences.
/// 
///
/// @param prefs 
/// @param overwrite If true, will overwrite all existing preferences. (optional) (default to false)
/// 
///  code:200 message:"Request was successful",
///  code:400 message:"Parameter Error",
///  code:401 message:"Unauthorized",
///  code:403 message:"Access Denied",
///  code:404 message:"Not Found"
///
/// @return SWGUser*
-(NSURLSessionTask*) userSavePreferencesWithPrefs: (NSString*) prefs
    overwrite: (NSNumber*) overwrite
    completionHandler: (void (^)(SWGUser* output, NSError* error)) handler;



@end
