/*******************************************************************************
* -----------------------------------------------------------------------------
*									     									 
* i2c.h - definitions for the i2c-bus interface			     			 
*									     
* -----------------------------------------------------------------------------
* Copyright (C) Damon Zhang
* All rights reserved.
*
* Author : Damon Zhang
* Website: https://damon-yun.github.io/blog.github.io/
* E-mail : 276062421@qq.com
*
* -----------------------------------------------------------------------------
*
* This program is free software; you can redistribute it and/or modify
* it under the terms of the GNU General Public License as published by
* the Free Software Foundation; either version 2 of the License, or
* (at your option) any later version.
*
* THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
* ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
* WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
* DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR
* ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
* (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
* LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON
* ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
* (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
* SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
*
* -----------------------------------------------------------------------------
*
* @file
* Dynamic memory manager
*
* -----------------------------------------------------------------------------
*******************************************************************************/

/**
 * \file
 * \brief 模拟SPI Flash的操作实现
 * 
 * \internal
 * \par Modification History
 * - 1.00 16-10-13  damon.zhang, first implementation.
 * \endinternal
 */


#ifndef __AM_TEMP_H
#define __AM_TEMP_H


#ifdef __cplusplus
extern "C" {
#endif
/*******************************************************************************
 * Header file
 ******************************************************************************/
#include "board.h"

#define CHIP_LPC5411X 
#define CORE_M4
/**
 * \addtogroup am_if_uart
 * \copydoc am_uart.h
 * @{
 */

/**
 * \name UART模式定义
 * \note 要使用GPIO功能或者可转移功能，必须先取消引脚的特殊功能
 * @{
 */
 
/** @} */
 
 
 
/** \brief 错误回调函数                 */
                            /**< \brief 设置波特率         */
 
 
 
/*******************************************************************************
 * #define region: constant & MACRO defined here                              
 ******************************************************************************/

/*******************************************************************************
 * extern region: extern global variable & function prototype                 
 ******************************************************************************/


/*****************************************************************************
 * Public types/enumerations/variables
 ****************************************************************************/

/*****************************************************************************
 * Public functions
 ****************************************************************************/
 
/*****************************************************************************
 * Public functions
 ****************************************************************************/
 
/**
 * \brief 设置UART回调函数
 *
 * \param[in] handle         : UART标准服务操作句柄
 *
 * \retval  AM_OK      : 回调函数设置成功
 * \retval -AM_EINVAL  : 设置失败，参数错误
 * \note 分配引脚可转移功能前，如果引脚有特殊功能，应先取消引脚的特殊功能
 *       #amhw_lpc82x_swm_pin_fixed_func_disable() 取消引脚的特殊功能
 */
 
/**
 * \brief UART数据发送（查询模式）
 *
 * \param[in] handle  : UART标准服务操作句柄
 *
 * \return 成功发送数据的个数
 */
 
 
/**
 * @}
 */
 
 #ifdef __cplusplus
}
#endif

#endif /* __AM_TEMP_H */

/* end of file */


