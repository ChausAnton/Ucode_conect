#include "../inc/header.h"

int main(int argc, char *argv[]) {
    
    if(argc != 3) {
        mx_printerr("usage: ./parse_agents [-p | -s | -n] [file_name]\n");
        return 0;
    }
    
    char *str = mx_file_to_str(argv[2]);
    
    int number_of_agents = 0;
    for(int i = 0; str[i] != '\0'; i++){
        if(str[i] == '{') {
            number_of_agents++;
        }
    } 
    
    char *name[number_of_agents];
    int *power = malloc(sizeof(int) * number_of_agents);
    int *strength = malloc(sizeof(int) * number_of_agents);
    int i = 0;
    while(i < number_of_agents) {
        str = mx_strstr(str , "name: ");
        name[i] = mx_take_info(str);
        str = mx_strstr(str , "power: ");
        power[i] = mx_atoi(mx_take_info(str));
        str = mx_strstr(str , "strength: ");
        strength[i] = mx_atoi(mx_take_info(str));
        i++;
    }

    t_agent **agents = mx_create_new_agents(name, power, strength, number_of_agents);

    if(mx_strcmp(argv[1], "-p") == 0) {
      mx_sort_by_power(agents, number_of_agents);
    }
    else if(mx_strcmp(argv[1], "-s") == 0) {
        mx_sort_by_strength(agents, number_of_agents);
    }
    else if(mx_strcmp(argv[1], "-n") == 0) {
        mx_sort_by_name(agents, number_of_agents);
    }
    else {
        mx_printerr("usage: ./parse_agents [-p | -s | -n] [file_name]\n");
        return 0;
    }
    for(int i = 0; i < number_of_agents; i++) {
        mx_printstr("agent: ");
        mx_printstr(agents[i]->name);
        mx_printstr(", power: ");
        mx_printint(agents[i]->power);
        mx_printstr(", strength: ");
        mx_printint(agents[i]->strength);
        mx_printstr("\n");
    }

}
