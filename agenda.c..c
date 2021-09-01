	/* agenda.c */

	#include <stdio.h>

	#include <string.h>

	struct agenda

	    {

	         struct

	         {

	               int hora;

	               int minutos;

	               int segundos;

	         } horario;

	         struct

	         {

	               int dia;

	               int mes;

	               int ano;

	         } dataCompromisso;

	         char compromisso[100];

	};

	 

	 

	main (void)

	{

	    struct agenda agenda;

	    char compromisso[100];

	    agenda.horario.hora=4;

	    agenda.horario.minutos = 20;

	    agenda.horario.segundos = 0;

	    agenda.dataCompromisso.dia = 27;

	    agenda.dataCompromisso.mes = 2;

	    agenda.dataCompromisso.ano = 21;

	    strcpy (agenda.compromisso,"Escola");

	    

	    printf("\nHorario: %d:%d:%d ", agenda.horario.hora,agenda.horario.minutos,agenda.horario.segundos);

	    printf("\nData: %d/%d/%d ", agenda.dataCompromisso.dia,agenda.dataCompromisso.mes,agenda.dataCompromisso.ano);

	    printf("\nCompromisso: %s ", agenda.compromisso);

	    return 0;

	}
