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
 * \brief ģ��SPI Flash�Ĳ���ʵ��
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
 * \name UARTģʽ����
 * \note Ҫʹ��GPIO���ܻ��߿�ת�ƹ��ܣ�������ȡ�����ŵ����⹦��
 * @{
 */
 
/** @} */
 
 
 
/** \brief ����ص�����                 */
                            /**< \brief ���ò�����         */
 
 
 
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
 * \brief ����UART�ص�����
 *
 * \param[in] handle         : UART��׼����������
 *
 * \retval  AM_OK      : �ص��������óɹ�
 * \retval -AM_EINVAL  : ����ʧ�ܣ���������
 * \note �������ſ�ת�ƹ���ǰ��������������⹦�ܣ�Ӧ��ȡ�����ŵ����⹦��
 *       #amhw_lpc82x_swm_pin_fixed_func_disable() ȡ�����ŵ����⹦��
 */
 
/**
 * \brief UART���ݷ��ͣ���ѯģʽ��
 *
 * \param[in] handle  : UART��׼����������
 *
 * \return �ɹ��������ݵĸ���
 */
 
 
/**
 * @}
 */
 
 #ifdef __cplusplus
}
#endif

#endif /* __AM_TEMP_H */

/* end of file */


