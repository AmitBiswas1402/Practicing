import React from 'react'
import ReactDOM from 'react-dom/client'
import App from './App.jsx'
import './index.css'
import { Provider } from 'react'
import { store } from './app/store.js'

ReactDOM.createRoot(document.getElementById('root')).render(
  <Provider>
    <App />
  </Provider>,
)
