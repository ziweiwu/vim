Vim�UnDo� @[���u�v$}h(�<D$z�D� �A���f"   %                 ?       ?   ?   ?    [�!�    _�                             ����                                                                                                                                                                                                                                                                                                                                                             [��8     �                   �               5�_�                            ����                                                                                                                                                                                                                                                                                                                                                             [��9     �                  5�_�                           ����                                                                                                                                                                                                                                                                                                                                                             [��;     �         5       * Filename:    server.h5�_�                           ����                                                                                                                                                                                                                                                                                                                                                             [��<     �         5       * Filename:   server.h5�_�                           ����                                                                                                                                                                                                                                                                                                                                                             [��=     �         5       * Filename:    server.h5�_�                           ����                                                                                                                                                                                                                                                                                                                                                             [��>     �         5       * Filename:    scwerver.h5�_�                    +        ����                                                                                                                                                                                                                                                                                                                            +          +          V       [��V     �   *   +          Gvoid get_file_list(char file_list[][MAX_BUFFER_LEN], int* total_files);5�_�      	              +        ����                                                                                                                                                                                                                                                                                                                            +          +          V       [��a     �   *   +           int string_to_int(char* string);5�_�      
           	   )        ����                                                                                                                                                                                                                                                                                                                            +          +          V       [��b     �   )   +   3    �   )   *   3    5�_�   	              
   +        ����                                                                                                                                                                                                                                                                                                                            ,          ,          V       [��c     �   *   -   4      1int read_file(char* file_buffer, char* filename);5�_�   
                 .        ����                                                                                                                                                                                                                                                                                                                            -          -          V       [��h     �   -   .           5�_�                    ,        ����                                                                                                                                                                                                                                                                                                                            ,           3           V        [��n    �   +   ,          1int read_file(char* file_buffer, char* filename);   Hint parse_commands(char* buffer, char commands_array[][MAX_BUFFER_LEN]);   'void* get_in_addr(struct sockaddr* sa);   *int setup_server_socket(char* portnumber);   3int connect_host(char* hostname, char* portnumber);   void server(char* portnumber);   void catch_SIGINT(int signo);    5�_�                    $        ����                                                                                                                                                                                                                                                                                                                            $           &           V        [���    �   #   $          1int is_client_commands_valid(char* error_message,   C                             char commands_array[][MAX_BUFFER_LEN],   /                             int num_commands);5�_�                    $        ����                                                                                                                                                                                                                                                                                                                                                             [���     �   (            �   '   )          #endif�   &   (           �   %   '           int string_to_int(char* string);�   $   &          #long get_file_size(char* filename);�   #   %          "int is_file_exist(char* filename);�   "   $          -int is_string_valid_number(char* given_port);�   !   #          9                          const int specific_ports_size);�       "          Fint is_not_specific_ports(char* given_port, const int* specific_ports,�      !          7                        const int port_range_high_end);�                 Gint is_valid_port_range(char* given_port, const int port_range_low_end,�                ,void validate_port_number(char* given_port);�                @void validate_num_args(int given_args, const int required_args);�                &static const int MAX_BUFFER_LEN = 512;�                 �                #include <assert.h>�                #include <dirent.h>�                #include <signal.h>�                #include <sys/wait.h>�                #include <arpa/inet.h>�                #include <netdb.h>�                #include <netinet/in.h>�                #include <sys/socket.h>�                #include <sys/types.h>�                #include <string.h>�                #include <errno.h>�                #include <unistd.h>�                #include <stdlib.h>�                #include <stdio.h>�                 �   
             #define _GNU_SOURCE�   	             #define _XOPEN_SOURCE 600�      
           �      	          #define SERVER_H�                #ifndef SERVER_H�                 �                 */�                 * Author:      Wu, Ziwei�                 * Filetype:    header�                 * Filename:    helpers.h�                 /**�   #   $           5�_�                            ����                                                                                                                                                                                                                                                                                                                                       (           V        [���    �                &static const int MAX_BUFFER_LEN = 512;5�_�                           ����                                                                                                                                                                                                                                                                                                                                       '           V        [��      �         )      #ifndef SERVER_H5�_�                           ����                                                                                                                                                                                                                                                                                                                                       '           V        [��%     �      	   )      #define SERVER_H5�_�                    
        ����                                                                                                                                                                                                                                                                                                                            
                    V       [��+     �   	   
          #define _XOPEN_SOURCE 600   #define _GNU_SOURCE5�_�                    
        ����                                                                                                                                                                                                                                                                                                                            
          
          V       [��-     �   	   
           5�_�                            ����                                                                                                                                                                                                                                                                                                                            
          
          V       [��5     �                #include <arpa/inet.h>5�_�                            ����                                                                                                                                                                                                                                                                                                                            
          
          V       [��7     �                #include <sys/types.h>5�_�                            ����                                                                                                                                                                                                                                                                                                                            
          
          V       [��7     �                #include <sys/socket.h>5�_�                            ����                                                                                                                                                                                                                                                                                                                            
          
          V       [��<    �                #include <sys/wait.h>5�_�                            ����                                                                                                                                                                                                                                                                                                                                                             [��p     �                #include <unistd.h>5�_�                    	        ����                                                                                                                                                                                                                                                                                                                                                             [��r     �      	           5�_�                    	        ����                                                                                                                                                                                                                                                                                                                                                             [��s     �                #include <stdio.h>5�_�                            ����                                                                                                                                                                                                                                                                                                                                                             [��v     �                #include <netinet/in.h>5�_�                            ����                                                                                                                                                                                                                                                                                                                                                             [��v     �                #include <netdb.h>5�_�                            ����                                                                                                                                                                                                                                                                                                                                                             [��x    �                #include <signal.h>5�_�                            ����                                                                                                                                                                                                                                                                                                                                                             [���     �             �             5�_�      !                      ����                                                                                                                                                                                                                                                                                                                                                             [���     �                 �             5�_�      "           !           ����                                                                                                                                                                                                                                                                                                                                                             [���     �                oo5�_�   !   #           "          ����                                                                                                                                                                                                                                                                                                                                                             [���     �               #include <errno.h>5�_�   "   $           #           ����                                                                                                                                                                                                                                                                                                                                                             [���    �                 5�_�   #   %           $          ����                                                                                                                                                                                                                                                                                                                                                             [��1   
 �      !          #endif�                  �                 int string_to_int(char *string);�                #long get_file_size(char *filename);�                "int is_file_exist(char *filename);�                -int is_string_valid_number(char *given_port);�                9                          const int specific_ports_size);�                4                          const int *specific_ports,�                +int is_not_specific_ports(char *given_port,�                7                        const int port_range_high_end);�                5                        const int port_range_low_end,�                &int is_port_in_range(char *given_port,�                ,void validate_port_number(char *given_port);�                @void validate_num_args(int given_args, const int required_args);�                 �                #include <assert.h>�                #include <dirent.h>�                #include <signal.h>�                #include <string.h>�                #include <unistd.h>�                #include <errno.h>�   
             #include <stdlib.h>�   	             #include <stdio.h>�      
           �      	          #define HELPERS_H�                #ifndef HELPERS_H�                 �                 */�                 * Author:      Wu, Ziwei�                 * Filetype:    header�                 * Filename:    helpers.h�                 /**�                )int is_valid_port_range(char *given_port,5�_�   $   &           %           ����                                                                                                                                                                                                                                                                                                                                                             [���    �       "          #endif�      !           �                  int string_to_int(char *string);�                1int read_file(char *file_buffer, char *filename);�                #long get_file_size(char *filename);�                "int is_file_exist(char *filename);�                -int is_string_valid_number(char *given_port);�                9                          const int specific_ports_size);�                4                          const int *specific_ports,�                +int is_not_specific_ports(char *given_port,�                4                     const int port_range_high_end);�                2                     const int port_range_low_end,�                &int is_port_in_range(char *given_port,�                ,void validate_port_number(char *given_port);�                @void validate_num_args(int given_args, const int required_args);�                 �                #include <assert.h>�                #include <dirent.h>�                #include <signal.h>�                #include <string.h>�                #include <unistd.h>�                #include <errno.h>�   
             #include <stdlib.h>�   	             #include <stdio.h>�      
           �      	          #define HELPERS_H�                #ifndef HELPERS_H�                 �                 */�                 * Author:      Wu, Ziwei�                 * Filetype:    header�                 * Filename:    helpers.h�                 /**�       "          #endif�      !           �                  int string_to_int(char *string);�                1int read_file(char* file_buffer, char* filename);�                #long get_file_size(char *filename);�                "int is_file_exist(char *filename);�                -int is_string_valid_number(char *given_port);�                9                          const int specific_ports_size);�                4                          const int *specific_ports,�                +int is_not_specific_ports(char *given_port,�                4                     const int port_range_high_end);�                2                     const int port_range_low_end,�                &int is_port_in_range(char *given_port,�                ,void validate_port_number(char *given_port);�                @void validate_num_args(int given_args, const int required_args);�                 �                #include <assert.h>�                #include <dirent.h>�                #include <signal.h>�                #include <string.h>�                #include <unistd.h>�                #include <errno.h>�   
             #include <stdlib.h>�   	             #include <stdio.h>�      
           �      	          #define HELPERS_H�                #ifndef HELPERS_H�                 �                 */�                 * Author:      Wu, Ziwei�                 * Filetype:    header�                 * Filename:    helpers.h�                 /**�              �              5�_�   %   (           &          ����                                                                                                                                                                                                                                                                                                                                                             [���    �       "          #endif�      !           �                  int string_to_int(char *string);�                ,int read_file(char *buffer, char *filename);�                #long get_file_size(char *filename);�                "int is_file_exist(char *filename);�                -int is_string_valid_number(char *given_port);�                9                          const int specific_ports_size);�                4                          const int *specific_ports,�                +int is_not_specific_ports(char *given_port,�                4                     const int port_range_high_end);�                2                     const int port_range_low_end,�                &int is_port_in_range(char *given_port,�                ,void validate_port_number(char *given_port);�                @void validate_num_args(int given_args, const int required_args);�                 �                #include <assert.h>�                #include <dirent.h>�                #include <signal.h>�                #include <string.h>�                #include <unistd.h>�                #include <errno.h>�   
             #include <stdlib.h>�   	             #include <stdio.h>�      
           �      	          #define HELPERS_H�                #ifndef HELPERS_H�                 �                 */�                 * Author:      Wu, Ziwei�                 * Filetype:    header�                 * Filename:    helpers.h�                 /**�         !      1int read_file(char *file_buffer, char *filename);5�_�   &   )   '       (           ����                                                                                                                                                                                                                                                                                                                                                             [���     �         !    �         !    5�_�   (   *           )           ����                                                                                                                                                                                                                                                                                                                                                  V        [���     �                 /**    * Filename:    helpers.h    * Filetype:    header    * Author:      Wu, Ziwei    */5�_�   )   +           *          ����                                                                                                                                                                                                                                                                                                                                                  V        [���     �          #      /* helpers.c5�_�   *   ,           +          ����                                                                                                                                                                                                                                                                                                                                                  V        [���     �         #       * helper functions5�_�   +   -           ,          ����                                                                                                                                                                                                                                                                                                                                                  V        [���     �         #       * helper function5�_�   ,   .           -          ����                                                                                                                                                                                                                                                                                                                                                  V        [���    �         #       * helper function header5�_�   -   /           .           ����                                                                                                                                                                                                                                                                                                                                                             [���     �         #    �         #    5�_�   .   0           /          ����                                                                                                                                                                                                                                                                                                                                                             [���     �         %      * * Contains validation and file processing    * helper function headers5�_�   /   1           0      +    ����                                                                                                                                                                                                                                                                                                                                                             [���     �         $      D * Contains validation and file processing * helper function headers5�_�   0   2           1      +    ����                                                                                                                                                                                                                                                                                                                                                             [���     �         $      C * Contains validation and file processing  helper function headers5�_�   1   3           2      +    ����                                                                                                                                                                                                                                                                                                                                                             [���     �         $      B * Contains validation and file processing helper function headers5�_�   2   4           3      +    ����                                                                                                                                                                                                                                                                                                                                                             [���     �         $      A * Contains validation and file processing elper function headers5�_�   3   5           4      +    ����                                                                                                                                                                                                                                                                                                                                                             [���     �         $      @ * Contains validation and file processing lper function headers5�_�   4   6           5      +    ����                                                                                                                                                                                                                                                                                                                                                             [���     �         $      ? * Contains validation and file processing per function headers5�_�   5   7           6      +    ����                                                                                                                                                                                                                                                                                                                                                             [���     �         $      > * Contains validation and file processing er function headers5�_�   6   8           7      +    ����                                                                                                                                                                                                                                                                                                                                                             [���     �         $      = * Contains validation and file processing r function headers5�_�   7   :           8      +    ����                                                                                                                                                                                                                                                                                                                                                             [���    �         $      < * Contains validation and file processing  function headers5�_�   8   ;   9       :          ����                                                                                                                                                                                                                                                                                                                                                             [�Ӯ     �         $       * Author: Wu, Ziwei5�_�   :   <           ;          ����                                                                                                                                                                                                                                                                                                                                                             [�ӯ     �         %      ; * Contains validation and file processing function headers5�_�   ;   =           <      :    ����                                                                                                                                                                                                                                                                                                                                                             [�ӷ     �         %      B * Header file for validation and file processing function headers5�_�   <   >           =      <    ����                                                                                                                                                                                                                                                                                                                                                             [�Ӹ     �         %      C * Header file for validation and file processing functions headers5�_�   =   ?           >      <    ����                                                                                                                                                                                                                                                                                                                                                             [�ӹ    �   %   '          #endif�   $   &           �   #   %           int string_to_int(char *string);�   "   $          ,int read_file(char *buffer, char *filename);�   !   #          #long get_file_size(char *filename);�       "          "int is_file_exist(char *filename);�      !          -int is_string_valid_number(char *given_port);�                 9                          const int specific_ports_size);�                4                          const int *specific_ports,�                +int is_not_specific_ports(char *given_port,�                4                     const int port_range_high_end);�                2                     const int port_range_low_end,�                &int is_port_in_range(char *given_port,�                ,void validate_port_number(char *given_port);�                @void validate_num_args(int given_args, const int required_args);�                 �                #include <assert.h>�                #include <dirent.h>�                #include <signal.h>�                #include <string.h>�                #include <unistd.h>�                #include <errno.h>�                #include <stdlib.h>�                #include <stdio.h>�                 �                #define HELPERS_H�                #ifndef HELPERS_H�   
              �   	              */�      
          2 * -----------------------------------------------�      	           * Last Modified: 11-24-2018�                 * Course: CS372�                 * Author: Wu, Ziwei�                 * �                 * to support server.c�                < * Header file for validation and file processing functions �                1 * ----------------------------------------------�                 /* helpers.h�         %      < * Header file for validation and file processing functions 5�_�   >               ?           ����                                                                                                                                                                                                                                                                                                                                                             [�!�    �                 *5�_�   8           :   9          ����                                                                                                                                                                                                                                                                                                                                                             [���     �         $      = * DeContains validation and file processing function headers5�_�   &           (   '           ����                                                                                                                                                                                                                                                                                                                                                             [���     �         !    �         !      /* helpers.c   1 * ----------------------------------------------   * * Contains validation and file processing    * helper functions    * Author: Wu, Ziwei   2 * -----------------------------------------------    */5�_�              !              ����                                                                                                                                                                                                                                                                                                                                                             [���     �                 �         !      o5��