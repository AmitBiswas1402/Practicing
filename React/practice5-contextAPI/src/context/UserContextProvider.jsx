import React, {useState} from "react";
import UserContext from "./userContext";

const UserContextProvider = ({children}) => {
    const [user, setuser] = React.useState()

  return (
    <UserContextProvider value={{user, setuser}}>
        {children}
    </UserContextProvider>                  
  )

}

export default UserContextProvider