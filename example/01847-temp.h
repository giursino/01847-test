//******************************************************************************
/// @file 01847-test.h
/// @brief Header file del modulo 01847-test 
/// $Author$
/// $Date$
/// $Revision$
///
///
///
//******************************************************************************

//
// -----
// $Id$
// -----
//


//-START--------------------------- Definitions ------------------------------//

#ifdef LOCAL
	#undef LOCAL
#endif
#define LOCAL static			///< Identifica tutti gli oggetti a carattere locale
#ifdef GLOBAL
	#undef GLOBAL
#endif
#define GLOBAL extern			///< Identifica tutti gli oggetti a carattere globale

#define SOCKET_FILE		"/tmp/01847-temp"

//#define CONNECTIONLESS
#define CONNECTION_ORIENTED

#define DAEMON
//-END----------------------------- Definitions ------------------------------//


//-START------------------------------ Types ---------------------------------//
typedef struct {
	int time;
	float temperature;

} SocketData_Type;
//-END-------------------------------- Types ---------------------------------//

//-START------------------------------ Macro ---------------------------------//
//-END-------------------------------- Macro ---------------------------------//

//-START------------------------------ Const ---------------------------------//
//-END-------------------------------- Const ---------------------------------//

//-START---------------------------- Variables -------------------------------//
//-END------------------------------ Variables -------------------------------//

//-START----------------------- Functions Declaration ------------------------//
//-END------------------------- Functions Declaration ------------------------//

