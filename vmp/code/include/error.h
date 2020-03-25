/**
 * @file error.h
 * @author zhao.wei (hw)
 * @brief 错误码定义
 * @version 0.1
 * @date 2019-12-17
 * 
 * @copyright Copyright (c) 2019
 * 
 */

#define SUCCESS 0 /**成功*/
#define ERROR 1   /**错误*/
#define TRUE (1)
#define FALSE (0)

#define ERR_FLASH_START (0xFF000000) /**flash模块 错误码基值*/
#define ERR_MMC_START (0xFF000100)   /**mmc模块 错误码基值*/
#define ERR_HTTP_START (0xFF000300)  /**HTTP模块 错误码基值*/
#define ERR_FTP_START (0xFF000400)  /**FTP模块 错误码基值*/
#define ERR_VMP_START (0xFF001000)   /**vmp模块 错误码基值*/
/***********************************************************
*                          FLASH模块错误码                   *
***********************************************************/
#define ERR_FLASH_OFFSET (ERR_FLASH_START + 1)       /**flash偏移地址错误*/
#define ERR_FLASH_MTDINDEX (ERR_FLASH_START + 2)     /**flash索引错误*/
#define ERR_FLASH_MTDOPEN (ERR_FLASH_START + 3)      /**flash设备打开错误*/
#define ERR_FLASH_READ (ERR_FLASH_START + 4)         /**flash设备读错误*/
#define ERR_FLASH_WRITE (ERR_FLASH_START + 5)        /**flash设备写错误*/
#define ERR_FLASH_ERASEMALLOC (ERR_FLASH_START + 6)  /**flash设备擦除申请内存错误*/
#define ERR_FLASH_ERASE (ERR_FLASH_START + 7)        /**flash设备擦除错误*/
#define ERR_FLASH_NULL_POINTER (ERR_FLASH_START + 8) /**flash设备操作空指针错误*/
#define ERR_FLASH_OPEN_FILE (ERR_FLASH_START + 9)    /**flash设备打开错误*/
#define ERR_FLASH_READ_FILE (ERR_FLASH_START + 10)   /**flash设备读文件错误*/
#define ERR_FLASH_TYPE (ERR_FLASH_START + 11)        /**flash设备类型错误*/
#define ERR_FLASH_MALLOC (ERR_FLASH_START + 12)      /**flash设备开内存错误*/
#define ERR_FLASH_UNUSED (ERR_FLASH_START + 13)      /**flash设备其他错误*/
/***********************************************************
*                          MMC模块错误码                   *
***********************************************************/
#define ERR_MMC_NULL_POINTER (ERR_MMC_START + 1) /**mmc设备空指针其他错误*/
#define ERR_MMC_OPEN_FILE (ERR_MMC_START + 2)    /**mmc设备打开文件错误*/
#define ERR_MMC_OFFSET (ERR_MMC_START + 3)       /**mmc设备偏移地址错误*/
#define ERR_MMC_READ (ERR_MMC_START + 4)         /**mmc设备读错误*/
#define ERR_MMC_WRITE (ERR_MMC_START + 5)        /**mmc设备写错误*/

/***********************************************************
*   FTP错误码                                             *
***********************************************************/
#define ERR_FTP_OPEN_FILE (ERR_FTP_START + 1)       /**FTP打开文件错误 */
#define ERR_FTP_TRANS_ERROR (ERR_FTP_START + 2) /**传输错误 */
#define ERR_FTP_FILE_MD5 (ERR_FTP_START + 3) /**md5校验错误 */
#define ERR_FTP_SUBVER_NUM (ERR_FTP_START + 4) /**子版本个数错误 */
/***********************************************************
*   HTTP错误码                                             *
***********************************************************/
#define ERR_HTTP_URL (ERR_HTTP_START + 1)       /**url格式错误 */
#define ERR_HTTP_SEND_JSON (ERR_HTTP_START + 2) /**构造发送json格式错误 */
#define ERR_HTTP_PARSE_JSON (ERR_HTTP_START + 3) /**解析json格式错误 */
#define ERR_HTTP_POST_DATA (ERR_HTTP_START + 4) /**构造发送json格式错误 */
#define ERR_HTTP_SUB_NUM (ERR_HTTP_START + 5) /**子版本个数错误 */
#define ERR_HTTP_DOWNLOAD_FILE (ERR_HTTP_START + 6) /**下载文件错误 */
#define ERR_HTTP_FILE_MD5 (ERR_HTTP_START + 7) /**md5校验错误 */
/***********************************************************
*                          VMP模块错误码                   *
***********************************************************/
#define ERR_VMP_NULL_POINTER (ERR_VMP_START + 1)        /**vmp空指针错误*/
#define ERR_VMP_STRING_FORMAT (ERR_VMP_START + 2)       /**vmp字符串格式错误*/
#define ERR_VMP_VERSION_INFO_STRING (ERR_VMP_START + 3) /**vmp版本信息格式错误*/
#define ERR_VMP_DATA_FORMAT (ERR_VMP_START + 4)         /**vmp cmd数据格式错误*/
#define ERR_VMP_FTP_OPEN (ERR_VMP_START + 5)            /**vmp ftp打开错误*/
#define ERR_VMP_FTP_RECV (ERR_VMP_START + 6)            /**vmp ftp接收错误*/
#define ERR_VMP_SUBVER_NUM (ERR_VMP_START + 7)          /**vmp 子版本数量比较错误*/
#define ERR_VMP_INFO_MAX_NUM (ERR_VMP_START + 8)        /**vmp 子版本数量过多错误*/
#define ERR_VMP_INFO_READ (ERR_VMP_START + 9)           /**vmp 版本信息读取错误*/
#define ERR_VMP_INFO_WRITE (ERR_VMP_START + 10)         /**vmp 版本信息写入错误*/
#define ERR_VMP_SUBNUM_CHECK (ERR_VMP_START + 11)       /**vmp 子版本校验错误*/
#define ERR_VMP_FILE_WRITE (ERR_VMP_START + 12)         /**vmp 版本信息写入错误*/
#define ERR_VMP_FILE_MD5 (ERR_VMP_START + 13)           /**vmp 版本md5校验错误*/