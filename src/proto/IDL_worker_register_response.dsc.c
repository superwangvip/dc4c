/* It had generated by DirectStruct v1.4.3 */
#include "IDL_worker_register_response.dsc.h"

int DSCINIT_worker_register_response( worker_register_response *pst )
{
	int	index[10] = { 0 } ; index[0] = 0 ;
	memset( pst , 0x00 , sizeof(worker_register_response) );
	return 0;
}

#include "fasterjson.h"

int DSCSERIALIZE_JSON_COMPACT_worker_register_response( worker_register_response *pst , char *encoding , char *buf , int *p_len )
{
	int	remain_len ;
	int	len ;
	char	tabs[10+1] ;
	int	index[10] = { 0 } ; index[0] = 0 ;
	remain_len = (*p_len) ;
	memset( tabs , '\t' , 10 );
	len=SNPRINTF(buf,remain_len,"{"); if(len<0||remain_len<len)return -1; buf+=len; remain_len-=len;
	len=SNPRINTF(buf,remain_len,"\"response_code\":"); if(len<0||remain_len<len)return -1; buf+=len; remain_len-=len;
	len=SNPRINTF(buf,remain_len,"%d",pst->response_code); if(len<0||remain_len<len)return -1; buf+=len; remain_len-=len;
	len=SNPRINTF(buf,remain_len,"}"); if(len<0||remain_len<len)return -1; buf+=len; remain_len-=len;
	
	if( p_len ) (*p_len) = (*p_len) - remain_len ;
	
	return 0;
}

funcCallbackOnJsonNode CallbackOnJsonNode_worker_register_response ;
int CallbackOnJsonNode_worker_register_response( int type , char *jpath , int jpath_len , int jpath_size , char *node , int node_len , char *content , int content_len , void *p )
{
	worker_register_response	*pst = (worker_register_response*)p ;
	int	index[10] = { 0 } ;
	int	len ;
	
	index[0] = 0 ;
	len = 0 ;
	
	if( type & FASTERJSON_NODE_BRANCH )
	{
		if( type & FASTERJSON_NODE_ENTER )
		{
		}
		else if( type & FASTERJSON_NODE_LEAVE )
		{
		}
	}
	else if( type & FASTERJSON_NODE_LEAF )
	{
		/* response_code */
		if( jpath_len == 14 && strncmp( jpath , "/response_code" , jpath_len ) == 0 )
		{NATOI(content,content_len,pst->response_code);}
	}
	
	return 0;
}

int DSCDESERIALIZE_JSON_COMPACT_worker_register_response( char *encoding , char *buf , int *p_len , worker_register_response *pst )
{
	char	jpath[ 1024 + 1 ] ;
	int	nret = 0 ;
	memset( jpath , 0x00 , sizeof(jpath) );
	nret = TravelJsonBuffer( buf , jpath , sizeof(jpath) , & CallbackOnJsonNode_worker_register_response , (void*)pst ) ;
	if( nret )
		return nret;
	
	return 0;
}
