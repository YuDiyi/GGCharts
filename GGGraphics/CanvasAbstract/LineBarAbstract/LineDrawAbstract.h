//
//  LineDrawAbstract.h
//  GGCharts
//
//  Created by 黄舜 on 17/8/4.
//  Copyright © 2017年 I really is a farmer. All rights reserved.
//

#ifndef LineDrawAbstract_h
#define LineDrawAbstract_h

#import "BaseLineBarAbstract.h"

@protocol LineDrawAbstract <BaseLineBarAbstract>

#pragma mark - 折线样式

/**
 * 折线线宽
 */
@property (nonatomic, assign, readonly) CGFloat lineWidth;

/**
 * 折线颜色
 */
@property (nonatomic, strong, readonly) UIColor * lineColor;

/**
 * 折线虚线样式
 */
@property (nonatomic, strong, readonly) NSArray <NSNumber *> *dashPattern;

/**
 * 显示关键点设置
 */
@property (nonatomic, strong, readonly) NSSet <NSNumber *> * showShapeIndexSet;


#pragma mark - 折线关键点配置

/**
 * 折线关键点半径
 */
@property (nonatomic, assign, readonly) CGFloat shapeRadius;

/**
 * 折线关键点填充色
 */
@property (nonatomic, strong, readonly) UIColor * shapeFillColor;

/**
 * 折线线宽
 */
@property (nonatomic, assign, readonly) CGFloat shapeLineWidth;


#pragma mark - 折线文字

/**
 * 折线文字字体
 */
@property (nonatomic, strong, readonly) UIFont * stringFont;

/**
 * 折线文字颜色
 */
@property (nonatomic, strong, readonly) UIColor * stringColor;

/**
 * 折线格式化字符串
 */
@property (nonatomic, strong, readonly) NSString * dataFormatter;

/**
 * 折线文字偏移比例
 * 
 * {0, 0} 数据点左下方绘制, {-0.5, -0.5} 数据点中心绘制, {-1, -1} 数据点右上方绘制
 */
@property (nonatomic, assign, readonly) CGPoint offSetRatio;

/**
 * 折线文字偏移
 */
@property (nonatomic, assign, readonly) CGSize stringOffset;


#pragma mark - 折线填充

/**
 * 围绕该Y轴坐标点填充, FLT_MIN 代表不填充
 */
@property (nonatomic, assign, readonly) CGFloat bottomYPix;

/**
 * 折线填充色, 优先级比渐变色高
 */
@property (nonatomic, strong, readonly) UIColor * lineFillColor;

/**
 * 折线填充渐变色, 数组传入CGColor
 */
@property (nonatomic, strong, readonly) NSArray * gradientFillColors;

/**
 * 填充色变化曲线, 由上至下
 */
@property (nonatomic, strong, readonly) NSArray <NSNumber *> *locations;

@end

#endif /* LineDrawAbstract_h */
